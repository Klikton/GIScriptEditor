
// Generated from f:/C++/GIScriptEditor/GIScript/antlr/GIScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GIScriptParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GIScriptParser.
 */
class  GIScriptListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterProgram(GIScriptParser::ProgramContext *ctx) = 0;
  virtual void exitProgram(GIScriptParser::ProgramContext *ctx) = 0;

  virtual void enterEvent(GIScriptParser::EventContext *ctx) = 0;
  virtual void exitEvent(GIScriptParser::EventContext *ctx) = 0;

  virtual void enterFunctionSign(GIScriptParser::FunctionSignContext *ctx) = 0;
  virtual void exitFunctionSign(GIScriptParser::FunctionSignContext *ctx) = 0;

  virtual void enterFunction(GIScriptParser::FunctionContext *ctx) = 0;
  virtual void exitFunction(GIScriptParser::FunctionContext *ctx) = 0;

  virtual void enterParameterList(GIScriptParser::ParameterListContext *ctx) = 0;
  virtual void exitParameterList(GIScriptParser::ParameterListContext *ctx) = 0;

  virtual void enterParameter(GIScriptParser::ParameterContext *ctx) = 0;
  virtual void exitParameter(GIScriptParser::ParameterContext *ctx) = 0;

  virtual void enterBuiltinType(GIScriptParser::BuiltinTypeContext *ctx) = 0;
  virtual void exitBuiltinType(GIScriptParser::BuiltinTypeContext *ctx) = 0;

  virtual void enterGenericType(GIScriptParser::GenericTypeContext *ctx) = 0;
  virtual void exitGenericType(GIScriptParser::GenericTypeContext *ctx) = 0;

  virtual void enterSingleType(GIScriptParser::SingleTypeContext *ctx) = 0;
  virtual void exitSingleType(GIScriptParser::SingleTypeContext *ctx) = 0;

  virtual void enterTuple(GIScriptParser::TupleContext *ctx) = 0;
  virtual void exitTuple(GIScriptParser::TupleContext *ctx) = 0;

  virtual void enterType(GIScriptParser::TypeContext *ctx) = 0;
  virtual void exitType(GIScriptParser::TypeContext *ctx) = 0;

  virtual void enterBlock(GIScriptParser::BlockContext *ctx) = 0;
  virtual void exitBlock(GIScriptParser::BlockContext *ctx) = 0;

  virtual void enterStatement(GIScriptParser::StatementContext *ctx) = 0;
  virtual void exitStatement(GIScriptParser::StatementContext *ctx) = 0;

  virtual void enterVarInit(GIScriptParser::VarInitContext *ctx) = 0;
  virtual void exitVarInit(GIScriptParser::VarInitContext *ctx) = 0;

  virtual void enterVarDef(GIScriptParser::VarDefContext *ctx) = 0;
  virtual void exitVarDef(GIScriptParser::VarDefContext *ctx) = 0;

  virtual void enterReturn(GIScriptParser::ReturnContext *ctx) = 0;
  virtual void exitReturn(GIScriptParser::ReturnContext *ctx) = 0;

  virtual void enterIf(GIScriptParser::IfContext *ctx) = 0;
  virtual void exitIf(GIScriptParser::IfContext *ctx) = 0;

  virtual void enterWhile(GIScriptParser::WhileContext *ctx) = 0;
  virtual void exitWhile(GIScriptParser::WhileContext *ctx) = 0;

  virtual void enterForInit(GIScriptParser::ForInitContext *ctx) = 0;
  virtual void exitForInit(GIScriptParser::ForInitContext *ctx) = 0;

  virtual void enterFor(GIScriptParser::ForContext *ctx) = 0;
  virtual void exitFor(GIScriptParser::ForContext *ctx) = 0;

  virtual void enterForEach(GIScriptParser::ForEachContext *ctx) = 0;
  virtual void exitForEach(GIScriptParser::ForEachContext *ctx) = 0;

  virtual void enterSwitch(GIScriptParser::SwitchContext *ctx) = 0;
  virtual void exitSwitch(GIScriptParser::SwitchContext *ctx) = 0;

  virtual void enterCase(GIScriptParser::CaseContext *ctx) = 0;
  virtual void exitCase(GIScriptParser::CaseContext *ctx) = 0;

  virtual void enterDefault(GIScriptParser::DefaultContext *ctx) = 0;
  virtual void exitDefault(GIScriptParser::DefaultContext *ctx) = 0;

  virtual void enterInitializer(GIScriptParser::InitializerContext *ctx) = 0;
  virtual void exitInitializer(GIScriptParser::InitializerContext *ctx) = 0;

  virtual void enterInitializerList(GIScriptParser::InitializerListContext *ctx) = 0;
  virtual void exitInitializerList(GIScriptParser::InitializerListContext *ctx) = 0;

  virtual void enterIntegerLiteral(GIScriptParser::IntegerLiteralContext *ctx) = 0;
  virtual void exitIntegerLiteral(GIScriptParser::IntegerLiteralContext *ctx) = 0;

  virtual void enterFloatLiteral(GIScriptParser::FloatLiteralContext *ctx) = 0;
  virtual void exitFloatLiteral(GIScriptParser::FloatLiteralContext *ctx) = 0;

  virtual void enterStringLiteral(GIScriptParser::StringLiteralContext *ctx) = 0;
  virtual void exitStringLiteral(GIScriptParser::StringLiteralContext *ctx) = 0;

  virtual void enterKeywordLiteral(GIScriptParser::KeywordLiteralContext *ctx) = 0;
  virtual void exitKeywordLiteral(GIScriptParser::KeywordLiteralContext *ctx) = 0;

  virtual void enterIdentifierLiteral(GIScriptParser::IdentifierLiteralContext *ctx) = 0;
  virtual void exitIdentifierLiteral(GIScriptParser::IdentifierLiteralContext *ctx) = 0;

  virtual void enterParenExpression(GIScriptParser::ParenExpressionContext *ctx) = 0;
  virtual void exitParenExpression(GIScriptParser::ParenExpressionContext *ctx) = 0;

  virtual void enterTypeInitializer(GIScriptParser::TypeInitializerContext *ctx) = 0;
  virtual void exitTypeInitializer(GIScriptParser::TypeInitializerContext *ctx) = 0;

  virtual void enterArgumentList(GIScriptParser::ArgumentListContext *ctx) = 0;
  virtual void exitArgumentList(GIScriptParser::ArgumentListContext *ctx) = 0;

  virtual void enterMemberAccess(GIScriptParser::MemberAccessContext *ctx) = 0;
  virtual void exitMemberAccess(GIScriptParser::MemberAccessContext *ctx) = 0;

  virtual void enterFunctionCall(GIScriptParser::FunctionCallContext *ctx) = 0;
  virtual void exitFunctionCall(GIScriptParser::FunctionCallContext *ctx) = 0;

  virtual void enterIncrement(GIScriptParser::IncrementContext *ctx) = 0;
  virtual void exitIncrement(GIScriptParser::IncrementContext *ctx) = 0;

  virtual void enterPostfix(GIScriptParser::PostfixContext *ctx) = 0;
  virtual void exitPostfix(GIScriptParser::PostfixContext *ctx) = 0;

  virtual void enterCast(GIScriptParser::CastContext *ctx) = 0;
  virtual void exitCast(GIScriptParser::CastContext *ctx) = 0;

  virtual void enterUnary(GIScriptParser::UnaryContext *ctx) = 0;
  virtual void exitUnary(GIScriptParser::UnaryContext *ctx) = 0;

  virtual void enterMultiplicative(GIScriptParser::MultiplicativeContext *ctx) = 0;
  virtual void exitMultiplicative(GIScriptParser::MultiplicativeContext *ctx) = 0;

  virtual void enterAdditive(GIScriptParser::AdditiveContext *ctx) = 0;
  virtual void exitAdditive(GIScriptParser::AdditiveContext *ctx) = 0;

  virtual void enterShift(GIScriptParser::ShiftContext *ctx) = 0;
  virtual void exitShift(GIScriptParser::ShiftContext *ctx) = 0;

  virtual void enterRelational(GIScriptParser::RelationalContext *ctx) = 0;
  virtual void exitRelational(GIScriptParser::RelationalContext *ctx) = 0;

  virtual void enterEquality(GIScriptParser::EqualityContext *ctx) = 0;
  virtual void exitEquality(GIScriptParser::EqualityContext *ctx) = 0;

  virtual void enterAnd(GIScriptParser::AndContext *ctx) = 0;
  virtual void exitAnd(GIScriptParser::AndContext *ctx) = 0;

  virtual void enterXor(GIScriptParser::XorContext *ctx) = 0;
  virtual void exitXor(GIScriptParser::XorContext *ctx) = 0;

  virtual void enterOr(GIScriptParser::OrContext *ctx) = 0;
  virtual void exitOr(GIScriptParser::OrContext *ctx) = 0;

  virtual void enterLogicalAnd(GIScriptParser::LogicalAndContext *ctx) = 0;
  virtual void exitLogicalAnd(GIScriptParser::LogicalAndContext *ctx) = 0;

  virtual void enterLogicalOr(GIScriptParser::LogicalOrContext *ctx) = 0;
  virtual void exitLogicalOr(GIScriptParser::LogicalOrContext *ctx) = 0;

  virtual void enterConditional(GIScriptParser::ConditionalContext *ctx) = 0;
  virtual void exitConditional(GIScriptParser::ConditionalContext *ctx) = 0;

  virtual void enterAssignment(GIScriptParser::AssignmentContext *ctx) = 0;
  virtual void exitAssignment(GIScriptParser::AssignmentContext *ctx) = 0;

  virtual void enterExpr(GIScriptParser::ExprContext *ctx) = 0;
  virtual void exitExpr(GIScriptParser::ExprContext *ctx) = 0;


};

