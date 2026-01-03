
// Generated from f:/C++/GIScriptEditor/GIScript/antlr/GIScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GIScriptVisitor.h"


/**
 * This class provides an empty implementation of GIScriptVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  GIScriptBaseVisitor : public GIScriptVisitor {
public:

  virtual std::any visitProgram(GIScriptParser::ProgramContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEvent(GIScriptParser::EventContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionSign(GIScriptParser::FunctionSignContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunction(GIScriptParser::FunctionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameterList(GIScriptParser::ParameterListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParameter(GIScriptParser::ParameterContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBuiltinType(GIScriptParser::BuiltinTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitGenericType(GIScriptParser::GenericTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSingleType(GIScriptParser::SingleTypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTuple(GIScriptParser::TupleContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitType(GIScriptParser::TypeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlock(GIScriptParser::BlockContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(GIScriptParser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarInit(GIScriptParser::VarInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVarDef(GIScriptParser::VarDefContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitReturn(GIScriptParser::ReturnContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIf(GIScriptParser::IfContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitWhile(GIScriptParser::WhileContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForInit(GIScriptParser::ForInitContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFor(GIScriptParser::ForContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitForEach(GIScriptParser::ForEachContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSwitch(GIScriptParser::SwitchContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCase(GIScriptParser::CaseContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefault(GIScriptParser::DefaultContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializer(GIScriptParser::InitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInitializerList(GIScriptParser::InitializerListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIntegerLiteral(GIScriptParser::IntegerLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFloatLiteral(GIScriptParser::FloatLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStringLiteral(GIScriptParser::StringLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitKeywordLiteral(GIScriptParser::KeywordLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIdentifierLiteral(GIScriptParser::IdentifierLiteralContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParenExpression(GIScriptParser::ParenExpressionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitTypeInitializer(GIScriptParser::TypeInitializerContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitArgumentList(GIScriptParser::ArgumentListContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMemberAccess(GIScriptParser::MemberAccessContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitFunctionCall(GIScriptParser::FunctionCallContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitIncrement(GIScriptParser::IncrementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitPostfix(GIScriptParser::PostfixContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitCast(GIScriptParser::CastContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitUnary(GIScriptParser::UnaryContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMultiplicative(GIScriptParser::MultiplicativeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAdditive(GIScriptParser::AdditiveContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitShift(GIScriptParser::ShiftContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitRelational(GIScriptParser::RelationalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitEquality(GIScriptParser::EqualityContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAnd(GIScriptParser::AndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitXor(GIScriptParser::XorContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOr(GIScriptParser::OrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalAnd(GIScriptParser::LogicalAndContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLogicalOr(GIScriptParser::LogicalOrContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConditional(GIScriptParser::ConditionalContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssignment(GIScriptParser::AssignmentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitExpr(GIScriptParser::ExprContext *ctx) override {
    return visitChildren(ctx);
  }


};

