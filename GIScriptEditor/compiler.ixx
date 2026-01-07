module;
#include <GINodeGraph.h>
export module compiler;

import GIScript;
import std;

using namespace Ugc;
using namespace Script;
using namespace NodeGraph;

class NodeGenerator;

export namespace Editor::Tools
{
	struct Module
	{
		std::unique_ptr<IGraph> graph;
		std::unique_ptr<ASTNode> ast;
	};

	class Compiler
	{
		friend NodeGenerator;
		std::unique_ptr<IProject> project;
		std::vector<Module> modules;
		std::vector<Module> symbol_modules;

		struct
		{
			struct Declaration
			{
				std::vector<Script::VarType> parameters;
				std::optional<Script::VarType> ret;
				IGraph* graph;
			};

			std::unordered_map<std::string, Declaration> map;
		} GlobalFunctions;

		void AddGlobalFunction(const std::string& name, std::unique_ptr<FunctionNode> func);
	public:
		explicit Compiler(std::unique_ptr<IProject> project);
		void AddModule(const std::string& name, const std::string& code);
		void Compile();
		void Write() const;
		std::unique_ptr<IProject> Release() { return std::move(project); }
	};
}
