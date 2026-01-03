
// Generated from f:/C++/GIScriptEditor/GIScript/antlr/GIScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GIScriptParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by GIScriptParser.
 */
class  GIScriptVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by GIScriptParser.
   */
    virtual std::any visitProgram(GIScriptParser::ProgramContext *context) = 0;

    virtual std::any visitEvent(GIScriptParser::EventContext *context) = 0;

    virtual std::any visitFunctionSign(GIScriptParser::FunctionSignContext *context) = 0;

    virtual std::any visitFunction(GIScriptParser::FunctionContext *context) = 0;

    virtual std::any visitParameterList(GIScriptParser::ParameterListContext *context) = 0;

    virtual std::any visitParameter(GIScriptParser::ParameterContext *context) = 0;

    virtual std::any visitBuiltinType(GIScriptParser::BuiltinTypeContext *context) = 0;

    virtual std::any visitGenericType(GIScriptParser::GenericTypeContext *context) = 0;

    virtual std::any visitSingleType(GIScriptParser::SingleTypeContext *context) = 0;

    virtual std::any visitTuple(GIScriptParser::TupleContext *context) = 0;

    virtual std::any visitType(GIScriptParser::TypeContext *context) = 0;

    virtual std::any visitBlock(GIScriptParser::BlockContext *context) = 0;

    virtual std::any visitStatement(GIScriptParser::StatementContext *context) = 0;

    virtual std::any visitVarInit(GIScriptParser::VarInitContext *context) = 0;

    virtual std::any visitVarDef(GIScriptParser::VarDefContext *context) = 0;

    virtual std::any visitReturn(GIScriptParser::ReturnContext *context) = 0;

    virtual std::any visitIf(GIScriptParser::IfContext *context) = 0;

    virtual std::any visitWhile(GIScriptParser::WhileContext *context) = 0;

    virtual std::any visitForInit(GIScriptParser::ForInitContext *context) = 0;

    virtual std::any visitFor(GIScriptParser::ForContext *context) = 0;

    virtual std::any visitForEach(GIScriptParser::ForEachContext *context) = 0;

    virtual std::any visitSwitch(GIScriptParser::SwitchContext *context) = 0;

    virtual std::any visitCase(GIScriptParser::CaseContext *context) = 0;

    virtual std::any visitDefault(GIScriptParser::DefaultContext *context) = 0;

    virtual std::any visitInitializer(GIScriptParser::InitializerContext *context) = 0;

    virtual std::any visitInitializerList(GIScriptParser::InitializerListContext *context) = 0;

    virtual std::any visitIntegerLiteral(GIScriptParser::IntegerLiteralContext *context) = 0;

    virtual std::any visitFloatLiteral(GIScriptParser::FloatLiteralContext *context) = 0;

    virtual std::any visitStringLiteral(GIScriptParser::StringLiteralContext *context) = 0;

    virtual std::any visitKeywordLiteral(GIScriptParser::KeywordLiteralContext *context) = 0;

    virtual std::any visitIdentifierLiteral(GIScriptParser::IdentifierLiteralContext *context) = 0;

    virtual std::any visitParenExpression(GIScriptParser::ParenExpressionContext *context) = 0;

    virtual std::any visitTypeInitializer(GIScriptParser::TypeInitializerContext *context) = 0;

    virtual std::any visitArgumentList(GIScriptParser::ArgumentListContext *context) = 0;

    virtual std::any visitMemberAccess(GIScriptParser::MemberAccessContext *context) = 0;

    virtual std::any visitFunctionCall(GIScriptParser::FunctionCallContext *context) = 0;

    virtual std::any visitIncrement(GIScriptParser::IncrementContext *context) = 0;

    virtual std::any visitPostfix(GIScriptParser::PostfixContext *context) = 0;

    virtual std::any visitCast(GIScriptParser::CastContext *context) = 0;

    virtual std::any visitUnary(GIScriptParser::UnaryContext *context) = 0;

    virtual std::any visitMultiplicative(GIScriptParser::MultiplicativeContext *context) = 0;

    virtual std::any visitAdditive(GIScriptParser::AdditiveContext *context) = 0;

    virtual std::any visitShift(GIScriptParser::ShiftContext *context) = 0;

    virtual std::any visitRelational(GIScriptParser::RelationalContext *context) = 0;

    virtual std::any visitEquality(GIScriptParser::EqualityContext *context) = 0;

    virtual std::any visitAnd(GIScriptParser::AndContext *context) = 0;

    virtual std::any visitXor(GIScriptParser::XorContext *context) = 0;

    virtual std::any visitOr(GIScriptParser::OrContext *context) = 0;

    virtual std::any visitLogicalAnd(GIScriptParser::LogicalAndContext *context) = 0;

    virtual std::any visitLogicalOr(GIScriptParser::LogicalOrContext *context) = 0;

    virtual std::any visitConditional(GIScriptParser::ConditionalContext *context) = 0;

    virtual std::any visitAssignment(GIScriptParser::AssignmentContext *context) = 0;

    virtual std::any visitExpr(GIScriptParser::ExprContext *context) = 0;


};

