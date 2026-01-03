
// Generated from f:/C++/GIScriptEditor/GIScript/antlr/GIScript.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GIScriptListener.h"


/**
 * This class provides an empty implementation of GIScriptListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GIScriptBaseListener : public GIScriptListener {
public:

  virtual void enterProgram(GIScriptParser::ProgramContext * /*ctx*/) override { }
  virtual void exitProgram(GIScriptParser::ProgramContext * /*ctx*/) override { }

  virtual void enterEvent(GIScriptParser::EventContext * /*ctx*/) override { }
  virtual void exitEvent(GIScriptParser::EventContext * /*ctx*/) override { }

  virtual void enterFunctionSign(GIScriptParser::FunctionSignContext * /*ctx*/) override { }
  virtual void exitFunctionSign(GIScriptParser::FunctionSignContext * /*ctx*/) override { }

  virtual void enterFunction(GIScriptParser::FunctionContext * /*ctx*/) override { }
  virtual void exitFunction(GIScriptParser::FunctionContext * /*ctx*/) override { }

  virtual void enterParameterList(GIScriptParser::ParameterListContext * /*ctx*/) override { }
  virtual void exitParameterList(GIScriptParser::ParameterListContext * /*ctx*/) override { }

  virtual void enterParameter(GIScriptParser::ParameterContext * /*ctx*/) override { }
  virtual void exitParameter(GIScriptParser::ParameterContext * /*ctx*/) override { }

  virtual void enterBuiltinType(GIScriptParser::BuiltinTypeContext * /*ctx*/) override { }
  virtual void exitBuiltinType(GIScriptParser::BuiltinTypeContext * /*ctx*/) override { }

  virtual void enterGenericType(GIScriptParser::GenericTypeContext * /*ctx*/) override { }
  virtual void exitGenericType(GIScriptParser::GenericTypeContext * /*ctx*/) override { }

  virtual void enterSingleType(GIScriptParser::SingleTypeContext * /*ctx*/) override { }
  virtual void exitSingleType(GIScriptParser::SingleTypeContext * /*ctx*/) override { }

  virtual void enterTuple(GIScriptParser::TupleContext * /*ctx*/) override { }
  virtual void exitTuple(GIScriptParser::TupleContext * /*ctx*/) override { }

  virtual void enterType(GIScriptParser::TypeContext * /*ctx*/) override { }
  virtual void exitType(GIScriptParser::TypeContext * /*ctx*/) override { }

  virtual void enterBlock(GIScriptParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(GIScriptParser::BlockContext * /*ctx*/) override { }

  virtual void enterStatement(GIScriptParser::StatementContext * /*ctx*/) override { }
  virtual void exitStatement(GIScriptParser::StatementContext * /*ctx*/) override { }

  virtual void enterVarInit(GIScriptParser::VarInitContext * /*ctx*/) override { }
  virtual void exitVarInit(GIScriptParser::VarInitContext * /*ctx*/) override { }

  virtual void enterVarDef(GIScriptParser::VarDefContext * /*ctx*/) override { }
  virtual void exitVarDef(GIScriptParser::VarDefContext * /*ctx*/) override { }

  virtual void enterReturn(GIScriptParser::ReturnContext * /*ctx*/) override { }
  virtual void exitReturn(GIScriptParser::ReturnContext * /*ctx*/) override { }

  virtual void enterIf(GIScriptParser::IfContext * /*ctx*/) override { }
  virtual void exitIf(GIScriptParser::IfContext * /*ctx*/) override { }

  virtual void enterWhile(GIScriptParser::WhileContext * /*ctx*/) override { }
  virtual void exitWhile(GIScriptParser::WhileContext * /*ctx*/) override { }

  virtual void enterForInit(GIScriptParser::ForInitContext * /*ctx*/) override { }
  virtual void exitForInit(GIScriptParser::ForInitContext * /*ctx*/) override { }

  virtual void enterFor(GIScriptParser::ForContext * /*ctx*/) override { }
  virtual void exitFor(GIScriptParser::ForContext * /*ctx*/) override { }

  virtual void enterForEach(GIScriptParser::ForEachContext * /*ctx*/) override { }
  virtual void exitForEach(GIScriptParser::ForEachContext * /*ctx*/) override { }

  virtual void enterSwitch(GIScriptParser::SwitchContext * /*ctx*/) override { }
  virtual void exitSwitch(GIScriptParser::SwitchContext * /*ctx*/) override { }

  virtual void enterCase(GIScriptParser::CaseContext * /*ctx*/) override { }
  virtual void exitCase(GIScriptParser::CaseContext * /*ctx*/) override { }

  virtual void enterDefault(GIScriptParser::DefaultContext * /*ctx*/) override { }
  virtual void exitDefault(GIScriptParser::DefaultContext * /*ctx*/) override { }

  virtual void enterInitializer(GIScriptParser::InitializerContext * /*ctx*/) override { }
  virtual void exitInitializer(GIScriptParser::InitializerContext * /*ctx*/) override { }

  virtual void enterInitializerList(GIScriptParser::InitializerListContext * /*ctx*/) override { }
  virtual void exitInitializerList(GIScriptParser::InitializerListContext * /*ctx*/) override { }

  virtual void enterIntegerLiteral(GIScriptParser::IntegerLiteralContext * /*ctx*/) override { }
  virtual void exitIntegerLiteral(GIScriptParser::IntegerLiteralContext * /*ctx*/) override { }

  virtual void enterFloatLiteral(GIScriptParser::FloatLiteralContext * /*ctx*/) override { }
  virtual void exitFloatLiteral(GIScriptParser::FloatLiteralContext * /*ctx*/) override { }

  virtual void enterStringLiteral(GIScriptParser::StringLiteralContext * /*ctx*/) override { }
  virtual void exitStringLiteral(GIScriptParser::StringLiteralContext * /*ctx*/) override { }

  virtual void enterKeywordLiteral(GIScriptParser::KeywordLiteralContext * /*ctx*/) override { }
  virtual void exitKeywordLiteral(GIScriptParser::KeywordLiteralContext * /*ctx*/) override { }

  virtual void enterIdentifierLiteral(GIScriptParser::IdentifierLiteralContext * /*ctx*/) override { }
  virtual void exitIdentifierLiteral(GIScriptParser::IdentifierLiteralContext * /*ctx*/) override { }

  virtual void enterParenExpression(GIScriptParser::ParenExpressionContext * /*ctx*/) override { }
  virtual void exitParenExpression(GIScriptParser::ParenExpressionContext * /*ctx*/) override { }

  virtual void enterTypeInitializer(GIScriptParser::TypeInitializerContext * /*ctx*/) override { }
  virtual void exitTypeInitializer(GIScriptParser::TypeInitializerContext * /*ctx*/) override { }

  virtual void enterArgumentList(GIScriptParser::ArgumentListContext * /*ctx*/) override { }
  virtual void exitArgumentList(GIScriptParser::ArgumentListContext * /*ctx*/) override { }

  virtual void enterMemberAccess(GIScriptParser::MemberAccessContext * /*ctx*/) override { }
  virtual void exitMemberAccess(GIScriptParser::MemberAccessContext * /*ctx*/) override { }

  virtual void enterFunctionCall(GIScriptParser::FunctionCallContext * /*ctx*/) override { }
  virtual void exitFunctionCall(GIScriptParser::FunctionCallContext * /*ctx*/) override { }

  virtual void enterIncrement(GIScriptParser::IncrementContext * /*ctx*/) override { }
  virtual void exitIncrement(GIScriptParser::IncrementContext * /*ctx*/) override { }

  virtual void enterPostfix(GIScriptParser::PostfixContext * /*ctx*/) override { }
  virtual void exitPostfix(GIScriptParser::PostfixContext * /*ctx*/) override { }

  virtual void enterCast(GIScriptParser::CastContext * /*ctx*/) override { }
  virtual void exitCast(GIScriptParser::CastContext * /*ctx*/) override { }

  virtual void enterUnary(GIScriptParser::UnaryContext * /*ctx*/) override { }
  virtual void exitUnary(GIScriptParser::UnaryContext * /*ctx*/) override { }

  virtual void enterMultiplicative(GIScriptParser::MultiplicativeContext * /*ctx*/) override { }
  virtual void exitMultiplicative(GIScriptParser::MultiplicativeContext * /*ctx*/) override { }

  virtual void enterAdditive(GIScriptParser::AdditiveContext * /*ctx*/) override { }
  virtual void exitAdditive(GIScriptParser::AdditiveContext * /*ctx*/) override { }

  virtual void enterShift(GIScriptParser::ShiftContext * /*ctx*/) override { }
  virtual void exitShift(GIScriptParser::ShiftContext * /*ctx*/) override { }

  virtual void enterRelational(GIScriptParser::RelationalContext * /*ctx*/) override { }
  virtual void exitRelational(GIScriptParser::RelationalContext * /*ctx*/) override { }

  virtual void enterEquality(GIScriptParser::EqualityContext * /*ctx*/) override { }
  virtual void exitEquality(GIScriptParser::EqualityContext * /*ctx*/) override { }

  virtual void enterAnd(GIScriptParser::AndContext * /*ctx*/) override { }
  virtual void exitAnd(GIScriptParser::AndContext * /*ctx*/) override { }

  virtual void enterXor(GIScriptParser::XorContext * /*ctx*/) override { }
  virtual void exitXor(GIScriptParser::XorContext * /*ctx*/) override { }

  virtual void enterOr(GIScriptParser::OrContext * /*ctx*/) override { }
  virtual void exitOr(GIScriptParser::OrContext * /*ctx*/) override { }

  virtual void enterLogicalAnd(GIScriptParser::LogicalAndContext * /*ctx*/) override { }
  virtual void exitLogicalAnd(GIScriptParser::LogicalAndContext * /*ctx*/) override { }

  virtual void enterLogicalOr(GIScriptParser::LogicalOrContext * /*ctx*/) override { }
  virtual void exitLogicalOr(GIScriptParser::LogicalOrContext * /*ctx*/) override { }

  virtual void enterConditional(GIScriptParser::ConditionalContext * /*ctx*/) override { }
  virtual void exitConditional(GIScriptParser::ConditionalContext * /*ctx*/) override { }

  virtual void enterAssignment(GIScriptParser::AssignmentContext * /*ctx*/) override { }
  virtual void exitAssignment(GIScriptParser::AssignmentContext * /*ctx*/) override { }

  virtual void enterExpr(GIScriptParser::ExprContext * /*ctx*/) override { }
  virtual void exitExpr(GIScriptParser::ExprContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

