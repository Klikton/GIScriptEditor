module;
#include <GINodeGraph.h>
export module compiler;

import GIScript;
import std;

using namespace Ugc;
using namespace Script;
using namespace NodeGraph;

export namespace Editor::Tools
{
	class Compiler
	{
		std::vector<std::unique_ptr<IGraph>> graphs;
	public:
		Compiler();
		void Compile(const std::string& name, const std::string& code);
		void Write(IProject* project) const;
	};
}
