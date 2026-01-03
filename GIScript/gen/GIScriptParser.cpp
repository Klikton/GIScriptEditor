
// Generated from f:/C++/GIScriptEditor/GIScript/antlr/GIScript.g4 by ANTLR 4.13.2


#include "GIScriptListener.h"
#include "GIScriptVisitor.h"

#include "GIScriptParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GIScriptParserStaticData final {
  GIScriptParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GIScriptParserStaticData(const GIScriptParserStaticData&) = delete;
  GIScriptParserStaticData(GIScriptParserStaticData&&) = delete;
  GIScriptParserStaticData& operator=(const GIScriptParserStaticData&) = delete;
  GIScriptParserStaticData& operator=(GIScriptParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag giscriptParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GIScriptParserStaticData> giscriptParserStaticData = nullptr;

void giscriptParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (giscriptParserStaticData != nullptr) {
    return;
  }
#else
  assert(giscriptParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GIScriptParserStaticData>(
    std::vector<std::string>{
      "program", "event", "functionSign", "function", "parameterList", "parameter", 
      "builtinType", "genericType", "singleType", "tuple", "type", "block", 
      "statement", "varInit", "varDef", "return", "if", "while", "forInit", 
      "for", "forEach", "switch", "case", "default", "initializer", "initializerList", 
      "primary", "argumentList", "memberAccess", "functionCall", "increment", 
      "postfix", "cast", "unary", "multiplicative", "additive", "shift", 
      "relational", "equality", "and", "xor", "or", "logicalAnd", "logicalOr", 
      "conditional", "assignment", "expr"
    },
    std::vector<std::string>{
      "", "'event'", "'('", "')'", "'void'", "'global'", "','", "'int'", 
      "'float'", "'bool'", "'string'", "'entity'", "'vec'", "'guid'", "'<'", 
      "'prefab'", "'cfg'", "'faction'", "'>'", "'list'", "'map'", "'{'", 
      "'}'", "';'", "'break'", "'='", "'var'", "'return'", "'if'", "'else'", 
      "'while'", "'for'", "':'", "'switch'", "'case'", "'default'", "'null'", 
      "'true'", "'false'", "'this'", "'['", "']'", "'.'", "'as'", "'++'", 
      "'--'", "'-'", "'!'", "'~'", "'*'", "'/'", "'%'", "'+'", "'<<'", "'>>'", 
      "'>>>'", "'<='", "'>='", "'=='", "'!='", "'&'", "'^'", "'|'", "'&&'", 
      "'||'", "'\\u003F'", "'+='", "'-='", "'*='", "'/='"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "INT_DEF", "FLOAT_DEF", "STRING_DEF", "ID", "WS", "BLOCK_COMMENT", 
      "LINE_COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,76,537,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,1,0,1,0,5,0,97,8,0,10,0,12,
  	0,100,9,0,1,1,1,1,1,1,1,1,3,1,106,8,1,1,1,1,1,1,1,1,2,1,2,3,2,113,8,2,
  	1,2,1,2,1,2,3,2,118,8,2,1,2,1,2,1,3,3,3,123,8,3,1,3,1,3,1,3,1,4,1,4,1,
  	4,5,4,131,8,4,10,4,12,4,134,9,4,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,3,6,149,8,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,
  	1,7,3,7,163,8,7,1,8,1,8,3,8,167,8,8,1,9,1,9,1,9,1,9,4,9,173,8,9,11,9,
  	12,9,174,1,9,1,9,1,10,1,10,3,10,181,8,10,1,11,1,11,5,11,185,8,11,10,11,
  	12,11,188,9,11,1,11,1,11,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,210,8,12,1,13,1,13,
  	1,13,3,13,215,8,13,1,14,1,14,3,14,219,8,14,1,14,1,14,1,14,5,14,224,8,
  	14,10,14,12,14,227,9,14,1,15,1,15,3,15,231,8,15,1,16,1,16,1,16,1,16,1,
  	16,1,16,1,16,3,16,240,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,3,
  	18,250,8,18,1,19,1,19,1,19,3,19,255,8,19,1,19,1,19,3,19,259,8,19,1,19,
  	1,19,3,19,263,8,19,1,19,1,19,1,19,1,20,1,20,1,20,1,20,3,20,272,8,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,21,1,21,1,21,1,21,1,21,1,21,5,21,286,8,
  	21,10,21,12,21,289,9,21,1,21,3,21,292,8,21,1,21,1,21,1,22,1,22,1,22,1,
  	22,5,22,300,8,22,10,22,12,22,303,9,22,1,23,1,23,1,23,5,23,308,8,23,10,
  	23,12,23,311,9,23,1,24,1,24,3,24,315,8,24,1,25,1,25,1,25,1,25,5,25,321,
  	8,25,10,25,12,25,324,9,25,3,25,326,8,25,1,25,1,25,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,1,26,1,26,1,26,1,26,1,26,3,26,342,8,26,1,27,1,27,1,27,
  	5,27,347,8,27,10,27,12,27,350,9,27,1,28,1,28,1,28,1,28,1,28,1,28,3,28,
  	358,8,28,1,28,1,28,3,28,362,8,28,1,29,1,29,3,29,366,8,29,1,29,1,29,1,
  	29,3,29,371,8,29,1,30,1,30,1,31,1,31,1,31,1,31,5,31,379,8,31,10,31,12,
  	31,382,9,31,1,32,1,32,1,32,1,32,1,32,1,32,3,32,390,8,32,1,33,5,33,393,
  	8,33,10,33,12,33,396,9,33,1,33,1,33,1,33,1,33,3,33,402,8,33,1,34,1,34,
  	1,34,1,34,1,34,1,34,5,34,410,8,34,10,34,12,34,413,9,34,1,35,1,35,1,35,
  	1,35,1,35,1,35,5,35,421,8,35,10,35,12,35,424,9,35,1,36,1,36,1,36,1,36,
  	1,36,1,36,5,36,432,8,36,10,36,12,36,435,9,36,1,37,1,37,1,37,1,37,1,37,
  	1,37,5,37,443,8,37,10,37,12,37,446,9,37,1,38,1,38,1,38,1,38,1,38,1,38,
  	5,38,454,8,38,10,38,12,38,457,9,38,1,39,1,39,1,39,1,39,1,39,1,39,5,39,
  	465,8,39,10,39,12,39,468,9,39,1,40,1,40,1,40,1,40,1,40,1,40,5,40,476,
  	8,40,10,40,12,40,479,9,40,1,41,1,41,1,41,1,41,1,41,1,41,5,41,487,8,41,
  	10,41,12,41,490,9,41,1,42,1,42,1,42,1,42,1,42,1,42,5,42,498,8,42,10,42,
  	12,42,501,9,42,1,43,1,43,1,43,1,43,1,43,1,43,5,43,509,8,43,10,43,12,43,
  	512,9,43,1,44,1,44,1,44,1,44,1,44,1,44,3,44,520,8,44,1,45,1,45,1,45,1,
  	45,1,45,3,45,527,8,45,1,46,1,46,1,46,5,46,532,8,46,10,46,12,46,535,9,
  	46,1,46,0,10,68,70,72,74,76,78,80,82,84,86,47,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,60,62,64,
  	66,68,70,72,74,76,78,80,82,84,86,88,90,92,0,11,2,0,11,11,15,17,2,0,70,
  	70,72,72,1,0,36,39,1,0,44,45,1,0,46,48,1,0,49,51,2,0,46,46,52,52,1,0,
  	53,55,3,0,14,14,18,18,56,57,1,0,58,59,2,0,25,25,66,69,565,0,98,1,0,0,
  	0,2,101,1,0,0,0,4,112,1,0,0,0,6,122,1,0,0,0,8,127,1,0,0,0,10,135,1,0,
  	0,0,12,148,1,0,0,0,14,162,1,0,0,0,16,166,1,0,0,0,18,168,1,0,0,0,20,180,
  	1,0,0,0,22,182,1,0,0,0,24,209,1,0,0,0,26,211,1,0,0,0,28,218,1,0,0,0,30,
  	228,1,0,0,0,32,232,1,0,0,0,34,241,1,0,0,0,36,249,1,0,0,0,38,251,1,0,0,
  	0,40,267,1,0,0,0,42,279,1,0,0,0,44,295,1,0,0,0,46,304,1,0,0,0,48,314,
  	1,0,0,0,50,316,1,0,0,0,52,341,1,0,0,0,54,343,1,0,0,0,56,357,1,0,0,0,58,
  	363,1,0,0,0,60,372,1,0,0,0,62,374,1,0,0,0,64,389,1,0,0,0,66,394,1,0,0,
  	0,68,403,1,0,0,0,70,414,1,0,0,0,72,425,1,0,0,0,74,436,1,0,0,0,76,447,
  	1,0,0,0,78,458,1,0,0,0,80,469,1,0,0,0,82,480,1,0,0,0,84,491,1,0,0,0,86,
  	502,1,0,0,0,88,513,1,0,0,0,90,526,1,0,0,0,92,528,1,0,0,0,94,97,3,2,1,
  	0,95,97,3,6,3,0,96,94,1,0,0,0,96,95,1,0,0,0,97,100,1,0,0,0,98,96,1,0,
  	0,0,98,99,1,0,0,0,99,1,1,0,0,0,100,98,1,0,0,0,101,102,5,1,0,0,102,103,
  	5,73,0,0,103,105,5,2,0,0,104,106,3,8,4,0,105,104,1,0,0,0,105,106,1,0,
  	0,0,106,107,1,0,0,0,107,108,5,3,0,0,108,109,3,22,11,0,109,3,1,0,0,0,110,
  	113,5,4,0,0,111,113,3,20,10,0,112,110,1,0,0,0,112,111,1,0,0,0,113,114,
  	1,0,0,0,114,115,5,73,0,0,115,117,5,2,0,0,116,118,3,8,4,0,117,116,1,0,
  	0,0,117,118,1,0,0,0,118,119,1,0,0,0,119,120,5,3,0,0,120,5,1,0,0,0,121,
  	123,5,5,0,0,122,121,1,0,0,0,122,123,1,0,0,0,123,124,1,0,0,0,124,125,3,
  	4,2,0,125,126,3,22,11,0,126,7,1,0,0,0,127,132,3,10,5,0,128,129,5,6,0,
  	0,129,131,3,10,5,0,130,128,1,0,0,0,131,134,1,0,0,0,132,130,1,0,0,0,132,
  	133,1,0,0,0,133,9,1,0,0,0,134,132,1,0,0,0,135,136,3,20,10,0,136,137,5,
  	73,0,0,137,11,1,0,0,0,138,149,5,7,0,0,139,149,5,8,0,0,140,149,5,9,0,0,
  	141,149,5,10,0,0,142,149,5,11,0,0,143,149,5,12,0,0,144,145,5,13,0,0,145,
  	146,5,14,0,0,146,147,7,0,0,0,147,149,5,18,0,0,148,138,1,0,0,0,148,139,
  	1,0,0,0,148,140,1,0,0,0,148,141,1,0,0,0,148,142,1,0,0,0,148,143,1,0,0,
  	0,148,144,1,0,0,0,149,13,1,0,0,0,150,151,5,19,0,0,151,152,5,14,0,0,152,
  	153,3,12,6,0,153,154,5,18,0,0,154,163,1,0,0,0,155,156,5,20,0,0,156,157,
  	5,14,0,0,157,158,3,12,6,0,158,159,5,6,0,0,159,160,3,12,6,0,160,161,5,
  	18,0,0,161,163,1,0,0,0,162,150,1,0,0,0,162,155,1,0,0,0,163,15,1,0,0,0,
  	164,167,3,12,6,0,165,167,3,14,7,0,166,164,1,0,0,0,166,165,1,0,0,0,167,
  	17,1,0,0,0,168,169,5,2,0,0,169,172,3,16,8,0,170,171,5,6,0,0,171,173,3,
  	16,8,0,172,170,1,0,0,0,173,174,1,0,0,0,174,172,1,0,0,0,174,175,1,0,0,
  	0,175,176,1,0,0,0,176,177,5,3,0,0,177,19,1,0,0,0,178,181,3,16,8,0,179,
  	181,3,18,9,0,180,178,1,0,0,0,180,179,1,0,0,0,181,21,1,0,0,0,182,186,5,
  	21,0,0,183,185,3,24,12,0,184,183,1,0,0,0,185,188,1,0,0,0,186,184,1,0,
  	0,0,186,187,1,0,0,0,187,189,1,0,0,0,188,186,1,0,0,0,189,190,5,22,0,0,
  	190,23,1,0,0,0,191,192,3,28,14,0,192,193,5,23,0,0,193,210,1,0,0,0,194,
  	195,3,92,46,0,195,196,5,23,0,0,196,210,1,0,0,0,197,198,3,30,15,0,198,
  	199,5,23,0,0,199,210,1,0,0,0,200,210,3,32,16,0,201,210,3,42,21,0,202,
  	210,3,38,19,0,203,210,3,40,20,0,204,210,3,34,17,0,205,210,3,22,11,0,206,
  	207,5,24,0,0,207,210,5,23,0,0,208,210,5,23,0,0,209,191,1,0,0,0,209,194,
  	1,0,0,0,209,197,1,0,0,0,209,200,1,0,0,0,209,201,1,0,0,0,209,202,1,0,0,
  	0,209,203,1,0,0,0,209,204,1,0,0,0,209,205,1,0,0,0,209,206,1,0,0,0,209,
  	208,1,0,0,0,210,25,1,0,0,0,211,214,5,73,0,0,212,213,5,25,0,0,213,215,
  	3,48,24,0,214,212,1,0,0,0,214,215,1,0,0,0,215,27,1,0,0,0,216,219,3,20,
  	10,0,217,219,5,26,0,0,218,216,1,0,0,0,218,217,1,0,0,0,219,220,1,0,0,0,
  	220,225,3,26,13,0,221,222,5,6,0,0,222,224,3,26,13,0,223,221,1,0,0,0,224,
  	227,1,0,0,0,225,223,1,0,0,0,225,226,1,0,0,0,226,29,1,0,0,0,227,225,1,
  	0,0,0,228,230,5,27,0,0,229,231,3,92,46,0,230,229,1,0,0,0,230,231,1,0,
  	0,0,231,31,1,0,0,0,232,233,5,28,0,0,233,234,5,2,0,0,234,235,3,92,46,0,
  	235,236,5,3,0,0,236,239,3,24,12,0,237,238,5,29,0,0,238,240,3,24,12,0,
  	239,237,1,0,0,0,239,240,1,0,0,0,240,33,1,0,0,0,241,242,5,30,0,0,242,243,
  	5,2,0,0,243,244,3,92,46,0,244,245,5,3,0,0,245,246,3,24,12,0,246,35,1,
  	0,0,0,247,250,3,28,14,0,248,250,3,92,46,0,249,247,1,0,0,0,249,248,1,0,
  	0,0,250,37,1,0,0,0,251,252,5,31,0,0,252,254,5,2,0,0,253,255,3,36,18,0,
  	254,253,1,0,0,0,254,255,1,0,0,0,255,256,1,0,0,0,256,258,5,23,0,0,257,
  	259,3,92,46,0,258,257,1,0,0,0,258,259,1,0,0,0,259,260,1,0,0,0,260,262,
  	5,23,0,0,261,263,3,92,46,0,262,261,1,0,0,0,262,263,1,0,0,0,263,264,1,
  	0,0,0,264,265,5,3,0,0,265,266,3,24,12,0,266,39,1,0,0,0,267,268,5,31,0,
  	0,268,271,5,2,0,0,269,272,3,20,10,0,270,272,5,26,0,0,271,269,1,0,0,0,
  	271,270,1,0,0,0,272,273,1,0,0,0,273,274,5,73,0,0,274,275,5,32,0,0,275,
  	276,3,90,45,0,276,277,5,3,0,0,277,278,3,24,12,0,278,41,1,0,0,0,279,280,
  	5,33,0,0,280,281,5,2,0,0,281,282,3,92,46,0,282,283,5,3,0,0,283,287,5,
  	21,0,0,284,286,3,44,22,0,285,284,1,0,0,0,286,289,1,0,0,0,287,285,1,0,
  	0,0,287,288,1,0,0,0,288,291,1,0,0,0,289,287,1,0,0,0,290,292,3,46,23,0,
  	291,290,1,0,0,0,291,292,1,0,0,0,292,293,1,0,0,0,293,294,5,22,0,0,294,
  	43,1,0,0,0,295,296,5,34,0,0,296,297,7,1,0,0,297,301,5,32,0,0,298,300,
  	3,24,12,0,299,298,1,0,0,0,300,303,1,0,0,0,301,299,1,0,0,0,301,302,1,0,
  	0,0,302,45,1,0,0,0,303,301,1,0,0,0,304,305,5,35,0,0,305,309,5,32,0,0,
  	306,308,3,24,12,0,307,306,1,0,0,0,308,311,1,0,0,0,309,307,1,0,0,0,309,
  	310,1,0,0,0,310,47,1,0,0,0,311,309,1,0,0,0,312,315,3,50,25,0,313,315,
  	3,90,45,0,314,312,1,0,0,0,314,313,1,0,0,0,315,49,1,0,0,0,316,325,5,21,
  	0,0,317,322,3,48,24,0,318,319,5,6,0,0,319,321,3,48,24,0,320,318,1,0,0,
  	0,321,324,1,0,0,0,322,320,1,0,0,0,322,323,1,0,0,0,323,326,1,0,0,0,324,
  	322,1,0,0,0,325,317,1,0,0,0,325,326,1,0,0,0,326,327,1,0,0,0,327,328,5,
  	22,0,0,328,51,1,0,0,0,329,342,5,70,0,0,330,342,5,71,0,0,331,342,5,72,
  	0,0,332,342,7,2,0,0,333,342,5,73,0,0,334,335,5,2,0,0,335,336,3,92,46,
  	0,336,337,5,3,0,0,337,342,1,0,0,0,338,339,3,16,8,0,339,340,3,50,25,0,
  	340,342,1,0,0,0,341,329,1,0,0,0,341,330,1,0,0,0,341,331,1,0,0,0,341,332,
  	1,0,0,0,341,333,1,0,0,0,341,334,1,0,0,0,341,338,1,0,0,0,342,53,1,0,0,
  	0,343,348,3,90,45,0,344,345,5,6,0,0,345,347,3,90,45,0,346,344,1,0,0,0,
  	347,350,1,0,0,0,348,346,1,0,0,0,348,349,1,0,0,0,349,55,1,0,0,0,350,348,
  	1,0,0,0,351,352,5,40,0,0,352,353,3,92,46,0,353,354,5,41,0,0,354,358,1,
  	0,0,0,355,356,5,42,0,0,356,358,5,73,0,0,357,351,1,0,0,0,357,355,1,0,0,
  	0,358,361,1,0,0,0,359,360,5,43,0,0,360,362,3,16,8,0,361,359,1,0,0,0,361,
  	362,1,0,0,0,362,57,1,0,0,0,363,365,5,2,0,0,364,366,3,54,27,0,365,364,
  	1,0,0,0,365,366,1,0,0,0,366,367,1,0,0,0,367,370,5,3,0,0,368,369,5,43,
  	0,0,369,371,3,20,10,0,370,368,1,0,0,0,370,371,1,0,0,0,371,59,1,0,0,0,
  	372,373,7,3,0,0,373,61,1,0,0,0,374,380,3,52,26,0,375,379,3,56,28,0,376,
  	379,3,58,29,0,377,379,3,60,30,0,378,375,1,0,0,0,378,376,1,0,0,0,378,377,
  	1,0,0,0,379,382,1,0,0,0,380,378,1,0,0,0,380,381,1,0,0,0,381,63,1,0,0,
  	0,382,380,1,0,0,0,383,384,5,2,0,0,384,385,3,16,8,0,385,386,5,3,0,0,386,
  	387,3,64,32,0,387,390,1,0,0,0,388,390,3,66,33,0,389,383,1,0,0,0,389,388,
  	1,0,0,0,390,65,1,0,0,0,391,393,3,60,30,0,392,391,1,0,0,0,393,396,1,0,
  	0,0,394,392,1,0,0,0,394,395,1,0,0,0,395,401,1,0,0,0,396,394,1,0,0,0,397,
  	402,3,62,31,0,398,399,7,4,0,0,399,402,3,64,32,0,400,402,3,52,26,0,401,
  	397,1,0,0,0,401,398,1,0,0,0,401,400,1,0,0,0,402,67,1,0,0,0,403,404,6,
  	34,-1,0,404,405,3,64,32,0,405,411,1,0,0,0,406,407,10,2,0,0,407,408,7,
  	5,0,0,408,410,3,64,32,0,409,406,1,0,0,0,410,413,1,0,0,0,411,409,1,0,0,
  	0,411,412,1,0,0,0,412,69,1,0,0,0,413,411,1,0,0,0,414,415,6,35,-1,0,415,
  	416,3,68,34,0,416,422,1,0,0,0,417,418,10,2,0,0,418,419,7,6,0,0,419,421,
  	3,68,34,0,420,417,1,0,0,0,421,424,1,0,0,0,422,420,1,0,0,0,422,423,1,0,
  	0,0,423,71,1,0,0,0,424,422,1,0,0,0,425,426,6,36,-1,0,426,427,3,70,35,
  	0,427,433,1,0,0,0,428,429,10,2,0,0,429,430,7,7,0,0,430,432,3,70,35,0,
  	431,428,1,0,0,0,432,435,1,0,0,0,433,431,1,0,0,0,433,434,1,0,0,0,434,73,
  	1,0,0,0,435,433,1,0,0,0,436,437,6,37,-1,0,437,438,3,72,36,0,438,444,1,
  	0,0,0,439,440,10,2,0,0,440,441,7,8,0,0,441,443,3,72,36,0,442,439,1,0,
  	0,0,443,446,1,0,0,0,444,442,1,0,0,0,444,445,1,0,0,0,445,75,1,0,0,0,446,
  	444,1,0,0,0,447,448,6,38,-1,0,448,449,3,74,37,0,449,455,1,0,0,0,450,451,
  	10,2,0,0,451,452,7,9,0,0,452,454,3,74,37,0,453,450,1,0,0,0,454,457,1,
  	0,0,0,455,453,1,0,0,0,455,456,1,0,0,0,456,77,1,0,0,0,457,455,1,0,0,0,
  	458,459,6,39,-1,0,459,460,3,76,38,0,460,466,1,0,0,0,461,462,10,2,0,0,
  	462,463,5,60,0,0,463,465,3,76,38,0,464,461,1,0,0,0,465,468,1,0,0,0,466,
  	464,1,0,0,0,466,467,1,0,0,0,467,79,1,0,0,0,468,466,1,0,0,0,469,470,6,
  	40,-1,0,470,471,3,78,39,0,471,477,1,0,0,0,472,473,10,2,0,0,473,474,5,
  	61,0,0,474,476,3,78,39,0,475,472,1,0,0,0,476,479,1,0,0,0,477,475,1,0,
  	0,0,477,478,1,0,0,0,478,81,1,0,0,0,479,477,1,0,0,0,480,481,6,41,-1,0,
  	481,482,3,80,40,0,482,488,1,0,0,0,483,484,10,2,0,0,484,485,5,62,0,0,485,
  	487,3,80,40,0,486,483,1,0,0,0,487,490,1,0,0,0,488,486,1,0,0,0,488,489,
  	1,0,0,0,489,83,1,0,0,0,490,488,1,0,0,0,491,492,6,42,-1,0,492,493,3,82,
  	41,0,493,499,1,0,0,0,494,495,10,2,0,0,495,496,5,63,0,0,496,498,3,82,41,
  	0,497,494,1,0,0,0,498,501,1,0,0,0,499,497,1,0,0,0,499,500,1,0,0,0,500,
  	85,1,0,0,0,501,499,1,0,0,0,502,503,6,43,-1,0,503,504,3,84,42,0,504,510,
  	1,0,0,0,505,506,10,2,0,0,506,507,5,64,0,0,507,509,3,84,42,0,508,505,1,
  	0,0,0,509,512,1,0,0,0,510,508,1,0,0,0,510,511,1,0,0,0,511,87,1,0,0,0,
  	512,510,1,0,0,0,513,519,3,86,43,0,514,515,5,65,0,0,515,516,3,92,46,0,
  	516,517,5,32,0,0,517,518,3,88,44,0,518,520,1,0,0,0,519,514,1,0,0,0,519,
  	520,1,0,0,0,520,89,1,0,0,0,521,527,3,88,44,0,522,523,3,66,33,0,523,524,
  	7,10,0,0,524,525,3,48,24,0,525,527,1,0,0,0,526,521,1,0,0,0,526,522,1,
  	0,0,0,527,91,1,0,0,0,528,533,3,90,45,0,529,530,5,6,0,0,530,532,3,90,45,
  	0,531,529,1,0,0,0,532,535,1,0,0,0,533,531,1,0,0,0,533,534,1,0,0,0,534,
  	93,1,0,0,0,535,533,1,0,0,0,55,96,98,105,112,117,122,132,148,162,166,174,
  	180,186,209,214,218,225,230,239,249,254,258,262,271,287,291,301,309,314,
  	322,325,341,348,357,361,365,370,378,380,389,394,401,411,422,433,444,455,
  	466,477,488,499,510,519,526,533
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  giscriptParserStaticData = std::move(staticData);
}

}

GIScriptParser::GIScriptParser(TokenStream *input) : GIScriptParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GIScriptParser::GIScriptParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GIScriptParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *giscriptParserStaticData->atn, giscriptParserStaticData->decisionToDFA, giscriptParserStaticData->sharedContextCache, options);
}

GIScriptParser::~GIScriptParser() {
  delete _interpreter;
}

const atn::ATN& GIScriptParser::getATN() const {
  return *giscriptParserStaticData->atn;
}

std::string GIScriptParser::getGrammarFileName() const {
  return "GIScript.g4";
}

const std::vector<std::string>& GIScriptParser::getRuleNames() const {
  return giscriptParserStaticData->ruleNames;
}

const dfa::Vocabulary& GIScriptParser::getVocabulary() const {
  return giscriptParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GIScriptParser::getSerializedATN() const {
  return giscriptParserStaticData->serializedATN;
}


//----------------- ProgramContext ------------------------------------------------------------------

GIScriptParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::EventContext *> GIScriptParser::ProgramContext::event() {
  return getRuleContexts<GIScriptParser::EventContext>();
}

GIScriptParser::EventContext* GIScriptParser::ProgramContext::event(size_t i) {
  return getRuleContext<GIScriptParser::EventContext>(i);
}

std::vector<GIScriptParser::FunctionContext *> GIScriptParser::ProgramContext::function() {
  return getRuleContexts<GIScriptParser::FunctionContext>();
}

GIScriptParser::FunctionContext* GIScriptParser::ProgramContext::function(size_t i) {
  return getRuleContext<GIScriptParser::FunctionContext>(i);
}


size_t GIScriptParser::ProgramContext::getRuleIndex() const {
  return GIScriptParser::RuleProgram;
}

void GIScriptParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void GIScriptParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any GIScriptParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ProgramContext* GIScriptParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 0, GIScriptParser::RuleProgram);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(98);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1589174) != 0)) {
      setState(96);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case GIScriptParser::T__0: {
          setState(94);
          event();
          break;
        }

        case GIScriptParser::T__1:
        case GIScriptParser::T__3:
        case GIScriptParser::T__4:
        case GIScriptParser::T__6:
        case GIScriptParser::T__7:
        case GIScriptParser::T__8:
        case GIScriptParser::T__9:
        case GIScriptParser::T__10:
        case GIScriptParser::T__11:
        case GIScriptParser::T__12:
        case GIScriptParser::T__18:
        case GIScriptParser::T__19: {
          setState(95);
          function();
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      setState(100);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- EventContext ------------------------------------------------------------------

GIScriptParser::EventContext::EventContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GIScriptParser::EventContext::ID() {
  return getToken(GIScriptParser::ID, 0);
}

GIScriptParser::BlockContext* GIScriptParser::EventContext::block() {
  return getRuleContext<GIScriptParser::BlockContext>(0);
}

GIScriptParser::ParameterListContext* GIScriptParser::EventContext::parameterList() {
  return getRuleContext<GIScriptParser::ParameterListContext>(0);
}


size_t GIScriptParser::EventContext::getRuleIndex() const {
  return GIScriptParser::RuleEvent;
}

void GIScriptParser::EventContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEvent(this);
}

void GIScriptParser::EventContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEvent(this);
}


std::any GIScriptParser::EventContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitEvent(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::EventContext* GIScriptParser::event() {
  EventContext *_localctx = _tracker.createInstance<EventContext>(_ctx, getState());
  enterRule(_localctx, 2, GIScriptParser::RuleEvent);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(101);
    match(GIScriptParser::T__0);
    setState(102);
    match(GIScriptParser::ID);
    setState(103);
    match(GIScriptParser::T__1);
    setState(105);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1589124) != 0)) {
      setState(104);
      parameterList();
    }
    setState(107);
    match(GIScriptParser::T__2);
    setState(108);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionSignContext ------------------------------------------------------------------

GIScriptParser::FunctionSignContext::FunctionSignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GIScriptParser::FunctionSignContext::ID() {
  return getToken(GIScriptParser::ID, 0);
}

GIScriptParser::TypeContext* GIScriptParser::FunctionSignContext::type() {
  return getRuleContext<GIScriptParser::TypeContext>(0);
}

GIScriptParser::ParameterListContext* GIScriptParser::FunctionSignContext::parameterList() {
  return getRuleContext<GIScriptParser::ParameterListContext>(0);
}


size_t GIScriptParser::FunctionSignContext::getRuleIndex() const {
  return GIScriptParser::RuleFunctionSign;
}

void GIScriptParser::FunctionSignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionSign(this);
}

void GIScriptParser::FunctionSignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionSign(this);
}


std::any GIScriptParser::FunctionSignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitFunctionSign(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::FunctionSignContext* GIScriptParser::functionSign() {
  FunctionSignContext *_localctx = _tracker.createInstance<FunctionSignContext>(_ctx, getState());
  enterRule(_localctx, 4, GIScriptParser::RuleFunctionSign);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(112);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__3: {
        setState(110);
        match(GIScriptParser::T__3);
        break;
      }

      case GIScriptParser::T__1:
      case GIScriptParser::T__6:
      case GIScriptParser::T__7:
      case GIScriptParser::T__8:
      case GIScriptParser::T__9:
      case GIScriptParser::T__10:
      case GIScriptParser::T__11:
      case GIScriptParser::T__12:
      case GIScriptParser::T__18:
      case GIScriptParser::T__19: {
        setState(111);
        type();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(114);
    match(GIScriptParser::ID);
    setState(115);
    match(GIScriptParser::T__1);
    setState(117);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 1589124) != 0)) {
      setState(116);
      parameterList();
    }
    setState(119);
    match(GIScriptParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionContext ------------------------------------------------------------------

GIScriptParser::FunctionContext::FunctionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::FunctionSignContext* GIScriptParser::FunctionContext::functionSign() {
  return getRuleContext<GIScriptParser::FunctionSignContext>(0);
}

GIScriptParser::BlockContext* GIScriptParser::FunctionContext::block() {
  return getRuleContext<GIScriptParser::BlockContext>(0);
}


size_t GIScriptParser::FunctionContext::getRuleIndex() const {
  return GIScriptParser::RuleFunction;
}

void GIScriptParser::FunctionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunction(this);
}

void GIScriptParser::FunctionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunction(this);
}


std::any GIScriptParser::FunctionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitFunction(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::FunctionContext* GIScriptParser::function() {
  FunctionContext *_localctx = _tracker.createInstance<FunctionContext>(_ctx, getState());
  enterRule(_localctx, 6, GIScriptParser::RuleFunction);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GIScriptParser::T__4) {
      setState(121);
      match(GIScriptParser::T__4);
    }
    setState(124);
    functionSign();
    setState(125);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterListContext ------------------------------------------------------------------

GIScriptParser::ParameterListContext::ParameterListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::ParameterContext *> GIScriptParser::ParameterListContext::parameter() {
  return getRuleContexts<GIScriptParser::ParameterContext>();
}

GIScriptParser::ParameterContext* GIScriptParser::ParameterListContext::parameter(size_t i) {
  return getRuleContext<GIScriptParser::ParameterContext>(i);
}


size_t GIScriptParser::ParameterListContext::getRuleIndex() const {
  return GIScriptParser::RuleParameterList;
}

void GIScriptParser::ParameterListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameterList(this);
}

void GIScriptParser::ParameterListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameterList(this);
}


std::any GIScriptParser::ParameterListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitParameterList(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ParameterListContext* GIScriptParser::parameterList() {
  ParameterListContext *_localctx = _tracker.createInstance<ParameterListContext>(_ctx, getState());
  enterRule(_localctx, 8, GIScriptParser::RuleParameterList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    parameter();
    setState(132);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GIScriptParser::T__5) {
      setState(128);
      match(GIScriptParser::T__5);
      setState(129);
      parameter();
      setState(134);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParameterContext ------------------------------------------------------------------

GIScriptParser::ParameterContext::ParameterContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::TypeContext* GIScriptParser::ParameterContext::type() {
  return getRuleContext<GIScriptParser::TypeContext>(0);
}

tree::TerminalNode* GIScriptParser::ParameterContext::ID() {
  return getToken(GIScriptParser::ID, 0);
}


size_t GIScriptParser::ParameterContext::getRuleIndex() const {
  return GIScriptParser::RuleParameter;
}

void GIScriptParser::ParameterContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParameter(this);
}

void GIScriptParser::ParameterContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParameter(this);
}


std::any GIScriptParser::ParameterContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitParameter(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ParameterContext* GIScriptParser::parameter() {
  ParameterContext *_localctx = _tracker.createInstance<ParameterContext>(_ctx, getState());
  enterRule(_localctx, 10, GIScriptParser::RuleParameter);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(135);
    type();
    setState(136);
    match(GIScriptParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BuiltinTypeContext ------------------------------------------------------------------

GIScriptParser::BuiltinTypeContext::BuiltinTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GIScriptParser::BuiltinTypeContext::getRuleIndex() const {
  return GIScriptParser::RuleBuiltinType;
}

void GIScriptParser::BuiltinTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBuiltinType(this);
}

void GIScriptParser::BuiltinTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBuiltinType(this);
}


std::any GIScriptParser::BuiltinTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitBuiltinType(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::BuiltinTypeContext* GIScriptParser::builtinType() {
  BuiltinTypeContext *_localctx = _tracker.createInstance<BuiltinTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, GIScriptParser::RuleBuiltinType);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(148);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__6: {
        enterOuterAlt(_localctx, 1);
        setState(138);
        match(GIScriptParser::T__6);
        break;
      }

      case GIScriptParser::T__7: {
        enterOuterAlt(_localctx, 2);
        setState(139);
        match(GIScriptParser::T__7);
        break;
      }

      case GIScriptParser::T__8: {
        enterOuterAlt(_localctx, 3);
        setState(140);
        match(GIScriptParser::T__8);
        break;
      }

      case GIScriptParser::T__9: {
        enterOuterAlt(_localctx, 4);
        setState(141);
        match(GIScriptParser::T__9);
        break;
      }

      case GIScriptParser::T__10: {
        enterOuterAlt(_localctx, 5);
        setState(142);
        match(GIScriptParser::T__10);
        break;
      }

      case GIScriptParser::T__11: {
        enterOuterAlt(_localctx, 6);
        setState(143);
        match(GIScriptParser::T__11);
        break;
      }

      case GIScriptParser::T__12: {
        enterOuterAlt(_localctx, 7);
        setState(144);
        match(GIScriptParser::T__12);
        setState(145);
        match(GIScriptParser::T__13);
        setState(146);
        antlrcpp::downCast<BuiltinTypeContext *>(_localctx)->con = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 231424) != 0))) {
          antlrcpp::downCast<BuiltinTypeContext *>(_localctx)->con = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(147);
        match(GIScriptParser::T__17);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GenericTypeContext ------------------------------------------------------------------

GIScriptParser::GenericTypeContext::GenericTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::BuiltinTypeContext *> GIScriptParser::GenericTypeContext::builtinType() {
  return getRuleContexts<GIScriptParser::BuiltinTypeContext>();
}

GIScriptParser::BuiltinTypeContext* GIScriptParser::GenericTypeContext::builtinType(size_t i) {
  return getRuleContext<GIScriptParser::BuiltinTypeContext>(i);
}


size_t GIScriptParser::GenericTypeContext::getRuleIndex() const {
  return GIScriptParser::RuleGenericType;
}

void GIScriptParser::GenericTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGenericType(this);
}

void GIScriptParser::GenericTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGenericType(this);
}


std::any GIScriptParser::GenericTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitGenericType(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::GenericTypeContext* GIScriptParser::genericType() {
  GenericTypeContext *_localctx = _tracker.createInstance<GenericTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, GIScriptParser::RuleGenericType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(162);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__18: {
        enterOuterAlt(_localctx, 1);
        setState(150);
        match(GIScriptParser::T__18);
        setState(151);
        match(GIScriptParser::T__13);
        setState(152);
        antlrcpp::downCast<GenericTypeContext *>(_localctx)->t = builtinType();
        setState(153);
        match(GIScriptParser::T__17);
        break;
      }

      case GIScriptParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(155);
        match(GIScriptParser::T__19);
        setState(156);
        match(GIScriptParser::T__13);
        setState(157);
        antlrcpp::downCast<GenericTypeContext *>(_localctx)->k = builtinType();
        setState(158);
        match(GIScriptParser::T__5);
        setState(159);
        antlrcpp::downCast<GenericTypeContext *>(_localctx)->v = builtinType();
        setState(160);
        match(GIScriptParser::T__17);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SingleTypeContext ------------------------------------------------------------------

GIScriptParser::SingleTypeContext::SingleTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::BuiltinTypeContext* GIScriptParser::SingleTypeContext::builtinType() {
  return getRuleContext<GIScriptParser::BuiltinTypeContext>(0);
}

GIScriptParser::GenericTypeContext* GIScriptParser::SingleTypeContext::genericType() {
  return getRuleContext<GIScriptParser::GenericTypeContext>(0);
}


size_t GIScriptParser::SingleTypeContext::getRuleIndex() const {
  return GIScriptParser::RuleSingleType;
}

void GIScriptParser::SingleTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSingleType(this);
}

void GIScriptParser::SingleTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSingleType(this);
}


std::any GIScriptParser::SingleTypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitSingleType(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::SingleTypeContext* GIScriptParser::singleType() {
  SingleTypeContext *_localctx = _tracker.createInstance<SingleTypeContext>(_ctx, getState());
  enterRule(_localctx, 16, GIScriptParser::RuleSingleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(166);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__6:
      case GIScriptParser::T__7:
      case GIScriptParser::T__8:
      case GIScriptParser::T__9:
      case GIScriptParser::T__10:
      case GIScriptParser::T__11:
      case GIScriptParser::T__12: {
        enterOuterAlt(_localctx, 1);
        setState(164);
        builtinType();
        break;
      }

      case GIScriptParser::T__18:
      case GIScriptParser::T__19: {
        enterOuterAlt(_localctx, 2);
        setState(165);
        genericType();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TupleContext ------------------------------------------------------------------

GIScriptParser::TupleContext::TupleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::SingleTypeContext *> GIScriptParser::TupleContext::singleType() {
  return getRuleContexts<GIScriptParser::SingleTypeContext>();
}

GIScriptParser::SingleTypeContext* GIScriptParser::TupleContext::singleType(size_t i) {
  return getRuleContext<GIScriptParser::SingleTypeContext>(i);
}


size_t GIScriptParser::TupleContext::getRuleIndex() const {
  return GIScriptParser::RuleTuple;
}

void GIScriptParser::TupleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTuple(this);
}

void GIScriptParser::TupleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTuple(this);
}


std::any GIScriptParser::TupleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitTuple(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::TupleContext* GIScriptParser::tuple() {
  TupleContext *_localctx = _tracker.createInstance<TupleContext>(_ctx, getState());
  enterRule(_localctx, 18, GIScriptParser::RuleTuple);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    match(GIScriptParser::T__1);
    setState(169);
    singleType();
    setState(172); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(170);
      match(GIScriptParser::T__5);
      setState(171);
      singleType();
      setState(174); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GIScriptParser::T__5);
    setState(176);
    match(GIScriptParser::T__2);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

GIScriptParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::SingleTypeContext* GIScriptParser::TypeContext::singleType() {
  return getRuleContext<GIScriptParser::SingleTypeContext>(0);
}

GIScriptParser::TupleContext* GIScriptParser::TypeContext::tuple() {
  return getRuleContext<GIScriptParser::TupleContext>(0);
}


size_t GIScriptParser::TypeContext::getRuleIndex() const {
  return GIScriptParser::RuleType;
}

void GIScriptParser::TypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType(this);
}

void GIScriptParser::TypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType(this);
}


std::any GIScriptParser::TypeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitType(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::TypeContext* GIScriptParser::type() {
  TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, getState());
  enterRule(_localctx, 20, GIScriptParser::RuleType);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(180);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__6:
      case GIScriptParser::T__7:
      case GIScriptParser::T__8:
      case GIScriptParser::T__9:
      case GIScriptParser::T__10:
      case GIScriptParser::T__11:
      case GIScriptParser::T__12:
      case GIScriptParser::T__18:
      case GIScriptParser::T__19: {
        enterOuterAlt(_localctx, 1);
        setState(178);
        singleType();
        break;
      }

      case GIScriptParser::T__1: {
        enterOuterAlt(_localctx, 2);
        setState(179);
        tuple();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

GIScriptParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::StatementContext *> GIScriptParser::BlockContext::statement() {
  return getRuleContexts<GIScriptParser::StatementContext>();
}

GIScriptParser::StatementContext* GIScriptParser::BlockContext::statement(size_t i) {
  return getRuleContext<GIScriptParser::StatementContext>(i);
}


size_t GIScriptParser::BlockContext::getRuleIndex() const {
  return GIScriptParser::RuleBlock;
}

void GIScriptParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void GIScriptParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}


std::any GIScriptParser::BlockContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitBlock(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::BlockContext* GIScriptParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 22, GIScriptParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(182);
    match(GIScriptParser::T__20);
    setState(186);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546400869302148) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(183);
      statement();
      setState(188);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    match(GIScriptParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

GIScriptParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::VarDefContext* GIScriptParser::StatementContext::varDef() {
  return getRuleContext<GIScriptParser::VarDefContext>(0);
}

GIScriptParser::ExprContext* GIScriptParser::StatementContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}

GIScriptParser::ReturnContext* GIScriptParser::StatementContext::return_() {
  return getRuleContext<GIScriptParser::ReturnContext>(0);
}

GIScriptParser::IfContext* GIScriptParser::StatementContext::if_() {
  return getRuleContext<GIScriptParser::IfContext>(0);
}

GIScriptParser::SwitchContext* GIScriptParser::StatementContext::switch_() {
  return getRuleContext<GIScriptParser::SwitchContext>(0);
}

GIScriptParser::ForContext* GIScriptParser::StatementContext::for_() {
  return getRuleContext<GIScriptParser::ForContext>(0);
}

GIScriptParser::ForEachContext* GIScriptParser::StatementContext::forEach() {
  return getRuleContext<GIScriptParser::ForEachContext>(0);
}

GIScriptParser::WhileContext* GIScriptParser::StatementContext::while_() {
  return getRuleContext<GIScriptParser::WhileContext>(0);
}

GIScriptParser::BlockContext* GIScriptParser::StatementContext::block() {
  return getRuleContext<GIScriptParser::BlockContext>(0);
}


size_t GIScriptParser::StatementContext::getRuleIndex() const {
  return GIScriptParser::RuleStatement;
}

void GIScriptParser::StatementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStatement(this);
}

void GIScriptParser::StatementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStatement(this);
}


std::any GIScriptParser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::StatementContext* GIScriptParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 24, GIScriptParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(209);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(191);
      varDef();
      setState(192);
      match(GIScriptParser::T__22);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(194);
      expr();
      setState(195);
      match(GIScriptParser::T__22);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(197);
      return_();
      setState(198);
      match(GIScriptParser::T__22);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(200);
      if_();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(201);
      switch_();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(202);
      for_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(203);
      forEach();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(204);
      while_();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(205);
      block();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(206);
      match(GIScriptParser::T__23);
      setState(207);
      match(GIScriptParser::T__22);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(208);
      match(GIScriptParser::T__22);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarInitContext ------------------------------------------------------------------

GIScriptParser::VarInitContext::VarInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GIScriptParser::VarInitContext::ID() {
  return getToken(GIScriptParser::ID, 0);
}

GIScriptParser::InitializerContext* GIScriptParser::VarInitContext::initializer() {
  return getRuleContext<GIScriptParser::InitializerContext>(0);
}


size_t GIScriptParser::VarInitContext::getRuleIndex() const {
  return GIScriptParser::RuleVarInit;
}

void GIScriptParser::VarInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarInit(this);
}

void GIScriptParser::VarInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarInit(this);
}


std::any GIScriptParser::VarInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitVarInit(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::VarInitContext* GIScriptParser::varInit() {
  VarInitContext *_localctx = _tracker.createInstance<VarInitContext>(_ctx, getState());
  enterRule(_localctx, 26, GIScriptParser::RuleVarInit);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(211);
    match(GIScriptParser::ID);
    setState(214);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GIScriptParser::T__24) {
      setState(212);
      match(GIScriptParser::T__24);
      setState(213);
      initializer();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarDefContext ------------------------------------------------------------------

GIScriptParser::VarDefContext::VarDefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::VarInitContext *> GIScriptParser::VarDefContext::varInit() {
  return getRuleContexts<GIScriptParser::VarInitContext>();
}

GIScriptParser::VarInitContext* GIScriptParser::VarDefContext::varInit(size_t i) {
  return getRuleContext<GIScriptParser::VarInitContext>(i);
}

GIScriptParser::TypeContext* GIScriptParser::VarDefContext::type() {
  return getRuleContext<GIScriptParser::TypeContext>(0);
}


size_t GIScriptParser::VarDefContext::getRuleIndex() const {
  return GIScriptParser::RuleVarDef;
}

void GIScriptParser::VarDefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarDef(this);
}

void GIScriptParser::VarDefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarDef(this);
}


std::any GIScriptParser::VarDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitVarDef(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::VarDefContext* GIScriptParser::varDef() {
  VarDefContext *_localctx = _tracker.createInstance<VarDefContext>(_ctx, getState());
  enterRule(_localctx, 28, GIScriptParser::RuleVarDef);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(218);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__1:
      case GIScriptParser::T__6:
      case GIScriptParser::T__7:
      case GIScriptParser::T__8:
      case GIScriptParser::T__9:
      case GIScriptParser::T__10:
      case GIScriptParser::T__11:
      case GIScriptParser::T__12:
      case GIScriptParser::T__18:
      case GIScriptParser::T__19: {
        setState(216);
        type();
        break;
      }

      case GIScriptParser::T__25: {
        setState(217);
        match(GIScriptParser::T__25);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(220);
    varInit();
    setState(225);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GIScriptParser::T__5) {
      setState(221);
      match(GIScriptParser::T__5);
      setState(222);
      varInit();
      setState(227);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

GIScriptParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ExprContext* GIScriptParser::ReturnContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}


size_t GIScriptParser::ReturnContext::getRuleIndex() const {
  return GIScriptParser::RuleReturn;
}

void GIScriptParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}

void GIScriptParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}


std::any GIScriptParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ReturnContext* GIScriptParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 30, GIScriptParser::RuleReturn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(228);
    match(GIScriptParser::T__26);
    setState(230);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546388561117060) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(229);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

GIScriptParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ExprContext* GIScriptParser::IfContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}

std::vector<GIScriptParser::StatementContext *> GIScriptParser::IfContext::statement() {
  return getRuleContexts<GIScriptParser::StatementContext>();
}

GIScriptParser::StatementContext* GIScriptParser::IfContext::statement(size_t i) {
  return getRuleContext<GIScriptParser::StatementContext>(i);
}


size_t GIScriptParser::IfContext::getRuleIndex() const {
  return GIScriptParser::RuleIf;
}

void GIScriptParser::IfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf(this);
}

void GIScriptParser::IfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf(this);
}


std::any GIScriptParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::IfContext* GIScriptParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 32, GIScriptParser::RuleIf);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(232);
    match(GIScriptParser::T__27);
    setState(233);
    match(GIScriptParser::T__1);
    setState(234);
    expr();
    setState(235);
    match(GIScriptParser::T__2);
    setState(236);
    antlrcpp::downCast<IfContext *>(_localctx)->then = statement();
    setState(239);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      setState(237);
      match(GIScriptParser::T__28);
      setState(238);
      antlrcpp::downCast<IfContext *>(_localctx)->else_ = statement();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileContext ------------------------------------------------------------------

GIScriptParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ExprContext* GIScriptParser::WhileContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}

GIScriptParser::StatementContext* GIScriptParser::WhileContext::statement() {
  return getRuleContext<GIScriptParser::StatementContext>(0);
}


size_t GIScriptParser::WhileContext::getRuleIndex() const {
  return GIScriptParser::RuleWhile;
}

void GIScriptParser::WhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile(this);
}

void GIScriptParser::WhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile(this);
}


std::any GIScriptParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::WhileContext* GIScriptParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 34, GIScriptParser::RuleWhile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(241);
    match(GIScriptParser::T__29);
    setState(242);
    match(GIScriptParser::T__1);
    setState(243);
    expr();
    setState(244);
    match(GIScriptParser::T__2);
    setState(245);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForInitContext ------------------------------------------------------------------

GIScriptParser::ForInitContext::ForInitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::VarDefContext* GIScriptParser::ForInitContext::varDef() {
  return getRuleContext<GIScriptParser::VarDefContext>(0);
}

GIScriptParser::ExprContext* GIScriptParser::ForInitContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}


size_t GIScriptParser::ForInitContext::getRuleIndex() const {
  return GIScriptParser::RuleForInit;
}

void GIScriptParser::ForInitContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForInit(this);
}

void GIScriptParser::ForInitContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForInit(this);
}


std::any GIScriptParser::ForInitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitForInit(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ForInitContext* GIScriptParser::forInit() {
  ForInitContext *_localctx = _tracker.createInstance<ForInitContext>(_ctx, getState());
  enterRule(_localctx, 36, GIScriptParser::RuleForInit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(249);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(247);
      varDef();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(248);
      expr();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForContext ------------------------------------------------------------------

GIScriptParser::ForContext::ForContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::StatementContext* GIScriptParser::ForContext::statement() {
  return getRuleContext<GIScriptParser::StatementContext>(0);
}

GIScriptParser::ForInitContext* GIScriptParser::ForContext::forInit() {
  return getRuleContext<GIScriptParser::ForInitContext>(0);
}

std::vector<GIScriptParser::ExprContext *> GIScriptParser::ForContext::expr() {
  return getRuleContexts<GIScriptParser::ExprContext>();
}

GIScriptParser::ExprContext* GIScriptParser::ForContext::expr(size_t i) {
  return getRuleContext<GIScriptParser::ExprContext>(i);
}


size_t GIScriptParser::ForContext::getRuleIndex() const {
  return GIScriptParser::RuleFor;
}

void GIScriptParser::ForContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFor(this);
}

void GIScriptParser::ForContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFor(this);
}


std::any GIScriptParser::ForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitFor(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ForContext* GIScriptParser::for_() {
  ForContext *_localctx = _tracker.createInstance<ForContext>(_ctx, getState());
  enterRule(_localctx, 38, GIScriptParser::RuleFor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(251);
    match(GIScriptParser::T__30);
    setState(252);
    match(GIScriptParser::T__1);
    setState(254);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546388628225924) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(253);
      forInit();
    }
    setState(256);
    match(GIScriptParser::T__22);
    setState(258);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546388561117060) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(257);
      antlrcpp::downCast<ForContext *>(_localctx)->cond = expr();
    }
    setState(260);
    match(GIScriptParser::T__22);
    setState(262);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546388561117060) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(261);
      antlrcpp::downCast<ForContext *>(_localctx)->it = expr();
    }
    setState(264);
    match(GIScriptParser::T__2);
    setState(265);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ForEachContext ------------------------------------------------------------------

GIScriptParser::ForEachContext::ForEachContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GIScriptParser::ForEachContext::ID() {
  return getToken(GIScriptParser::ID, 0);
}

GIScriptParser::AssignmentContext* GIScriptParser::ForEachContext::assignment() {
  return getRuleContext<GIScriptParser::AssignmentContext>(0);
}

GIScriptParser::StatementContext* GIScriptParser::ForEachContext::statement() {
  return getRuleContext<GIScriptParser::StatementContext>(0);
}

GIScriptParser::TypeContext* GIScriptParser::ForEachContext::type() {
  return getRuleContext<GIScriptParser::TypeContext>(0);
}


size_t GIScriptParser::ForEachContext::getRuleIndex() const {
  return GIScriptParser::RuleForEach;
}

void GIScriptParser::ForEachContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterForEach(this);
}

void GIScriptParser::ForEachContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitForEach(this);
}


std::any GIScriptParser::ForEachContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitForEach(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ForEachContext* GIScriptParser::forEach() {
  ForEachContext *_localctx = _tracker.createInstance<ForEachContext>(_ctx, getState());
  enterRule(_localctx, 40, GIScriptParser::RuleForEach);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(267);
    match(GIScriptParser::T__30);
    setState(268);
    match(GIScriptParser::T__1);
    setState(271);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__1:
      case GIScriptParser::T__6:
      case GIScriptParser::T__7:
      case GIScriptParser::T__8:
      case GIScriptParser::T__9:
      case GIScriptParser::T__10:
      case GIScriptParser::T__11:
      case GIScriptParser::T__12:
      case GIScriptParser::T__18:
      case GIScriptParser::T__19: {
        setState(269);
        type();
        break;
      }

      case GIScriptParser::T__25: {
        setState(270);
        match(GIScriptParser::T__25);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(273);
    match(GIScriptParser::ID);
    setState(274);
    match(GIScriptParser::T__31);
    setState(275);
    assignment();
    setState(276);
    match(GIScriptParser::T__2);
    setState(277);
    statement();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SwitchContext ------------------------------------------------------------------

GIScriptParser::SwitchContext::SwitchContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ExprContext* GIScriptParser::SwitchContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}

std::vector<GIScriptParser::CaseContext *> GIScriptParser::SwitchContext::case_() {
  return getRuleContexts<GIScriptParser::CaseContext>();
}

GIScriptParser::CaseContext* GIScriptParser::SwitchContext::case_(size_t i) {
  return getRuleContext<GIScriptParser::CaseContext>(i);
}

GIScriptParser::DefaultContext* GIScriptParser::SwitchContext::default_() {
  return getRuleContext<GIScriptParser::DefaultContext>(0);
}


size_t GIScriptParser::SwitchContext::getRuleIndex() const {
  return GIScriptParser::RuleSwitch;
}

void GIScriptParser::SwitchContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSwitch(this);
}

void GIScriptParser::SwitchContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSwitch(this);
}


std::any GIScriptParser::SwitchContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitSwitch(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::SwitchContext* GIScriptParser::switch_() {
  SwitchContext *_localctx = _tracker.createInstance<SwitchContext>(_ctx, getState());
  enterRule(_localctx, 42, GIScriptParser::RuleSwitch);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(279);
    match(GIScriptParser::T__32);
    setState(280);
    match(GIScriptParser::T__1);
    setState(281);
    expr();
    setState(282);
    match(GIScriptParser::T__2);
    setState(283);
    match(GIScriptParser::T__20);
    setState(287);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GIScriptParser::T__33) {
      setState(284);
      case_();
      setState(289);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(291);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GIScriptParser::T__34) {
      setState(290);
      default_();
    }
    setState(293);
    match(GIScriptParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CaseContext ------------------------------------------------------------------

GIScriptParser::CaseContext::CaseContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GIScriptParser::CaseContext::INT_DEF() {
  return getToken(GIScriptParser::INT_DEF, 0);
}

tree::TerminalNode* GIScriptParser::CaseContext::STRING_DEF() {
  return getToken(GIScriptParser::STRING_DEF, 0);
}

std::vector<GIScriptParser::StatementContext *> GIScriptParser::CaseContext::statement() {
  return getRuleContexts<GIScriptParser::StatementContext>();
}

GIScriptParser::StatementContext* GIScriptParser::CaseContext::statement(size_t i) {
  return getRuleContext<GIScriptParser::StatementContext>(i);
}


size_t GIScriptParser::CaseContext::getRuleIndex() const {
  return GIScriptParser::RuleCase;
}

void GIScriptParser::CaseContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCase(this);
}

void GIScriptParser::CaseContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCase(this);
}


std::any GIScriptParser::CaseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitCase(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::CaseContext* GIScriptParser::case_() {
  CaseContext *_localctx = _tracker.createInstance<CaseContext>(_ctx, getState());
  enterRule(_localctx, 44, GIScriptParser::RuleCase);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(295);
    match(GIScriptParser::T__33);
    setState(296);
    _la = _input->LA(1);
    if (!(_la == GIScriptParser::INT_DEF

    || _la == GIScriptParser::STRING_DEF)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
    setState(297);
    match(GIScriptParser::T__31);
    setState(301);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546400869302148) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(298);
      statement();
      setState(303);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefaultContext ------------------------------------------------------------------

GIScriptParser::DefaultContext::DefaultContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::StatementContext *> GIScriptParser::DefaultContext::statement() {
  return getRuleContexts<GIScriptParser::StatementContext>();
}

GIScriptParser::StatementContext* GIScriptParser::DefaultContext::statement(size_t i) {
  return getRuleContext<GIScriptParser::StatementContext>(i);
}


size_t GIScriptParser::DefaultContext::getRuleIndex() const {
  return GIScriptParser::RuleDefault;
}

void GIScriptParser::DefaultContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDefault(this);
}

void GIScriptParser::DefaultContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDefault(this);
}


std::any GIScriptParser::DefaultContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitDefault(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::DefaultContext* GIScriptParser::default_() {
  DefaultContext *_localctx = _tracker.createInstance<DefaultContext>(_ctx, getState());
  enterRule(_localctx, 46, GIScriptParser::RuleDefault);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(304);
    match(GIScriptParser::T__34);
    setState(305);
    match(GIScriptParser::T__31);
    setState(309);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546400869302148) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(306);
      statement();
      setState(311);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerContext ------------------------------------------------------------------

GIScriptParser::InitializerContext::InitializerContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::InitializerListContext* GIScriptParser::InitializerContext::initializerList() {
  return getRuleContext<GIScriptParser::InitializerListContext>(0);
}

GIScriptParser::AssignmentContext* GIScriptParser::InitializerContext::assignment() {
  return getRuleContext<GIScriptParser::AssignmentContext>(0);
}


size_t GIScriptParser::InitializerContext::getRuleIndex() const {
  return GIScriptParser::RuleInitializer;
}

void GIScriptParser::InitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializer(this);
}

void GIScriptParser::InitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializer(this);
}


std::any GIScriptParser::InitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitInitializer(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::InitializerContext* GIScriptParser::initializer() {
  InitializerContext *_localctx = _tracker.createInstance<InitializerContext>(_ctx, getState());
  enterRule(_localctx, 48, GIScriptParser::RuleInitializer);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(314);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__20: {
        enterOuterAlt(_localctx, 1);
        setState(312);
        initializerList();
        break;
      }

      case GIScriptParser::T__1:
      case GIScriptParser::T__6:
      case GIScriptParser::T__7:
      case GIScriptParser::T__8:
      case GIScriptParser::T__9:
      case GIScriptParser::T__10:
      case GIScriptParser::T__11:
      case GIScriptParser::T__12:
      case GIScriptParser::T__18:
      case GIScriptParser::T__19:
      case GIScriptParser::T__35:
      case GIScriptParser::T__36:
      case GIScriptParser::T__37:
      case GIScriptParser::T__38:
      case GIScriptParser::T__43:
      case GIScriptParser::T__44:
      case GIScriptParser::T__45:
      case GIScriptParser::T__46:
      case GIScriptParser::T__47:
      case GIScriptParser::INT_DEF:
      case GIScriptParser::FLOAT_DEF:
      case GIScriptParser::STRING_DEF:
      case GIScriptParser::ID: {
        enterOuterAlt(_localctx, 2);
        setState(313);
        assignment();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- InitializerListContext ------------------------------------------------------------------

GIScriptParser::InitializerListContext::InitializerListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::InitializerContext *> GIScriptParser::InitializerListContext::initializer() {
  return getRuleContexts<GIScriptParser::InitializerContext>();
}

GIScriptParser::InitializerContext* GIScriptParser::InitializerListContext::initializer(size_t i) {
  return getRuleContext<GIScriptParser::InitializerContext>(i);
}


size_t GIScriptParser::InitializerListContext::getRuleIndex() const {
  return GIScriptParser::RuleInitializerList;
}

void GIScriptParser::InitializerListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterInitializerList(this);
}

void GIScriptParser::InitializerListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitInitializerList(this);
}


std::any GIScriptParser::InitializerListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitInitializerList(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::InitializerListContext* GIScriptParser::initializerList() {
  InitializerListContext *_localctx = _tracker.createInstance<InitializerListContext>(_ctx, getState());
  enterRule(_localctx, 50, GIScriptParser::RuleInitializerList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(316);
    match(GIScriptParser::T__20);
    setState(325);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546388563214212) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(317);
      initializer();
      setState(322);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == GIScriptParser::T__5) {
        setState(318);
        match(GIScriptParser::T__5);
        setState(319);
        initializer();
        setState(324);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(327);
    match(GIScriptParser::T__21);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrimaryContext ------------------------------------------------------------------

GIScriptParser::PrimaryContext::PrimaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GIScriptParser::PrimaryContext::getRuleIndex() const {
  return GIScriptParser::RulePrimary;
}

void GIScriptParser::PrimaryContext::copyFrom(PrimaryContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StringLiteralContext ------------------------------------------------------------------

tree::TerminalNode* GIScriptParser::StringLiteralContext::STRING_DEF() {
  return getToken(GIScriptParser::STRING_DEF, 0);
}

GIScriptParser::StringLiteralContext::StringLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void GIScriptParser::StringLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStringLiteral(this);
}
void GIScriptParser::StringLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStringLiteral(this);
}

std::any GIScriptParser::StringLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitStringLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FloatLiteralContext ------------------------------------------------------------------

tree::TerminalNode* GIScriptParser::FloatLiteralContext::FLOAT_DEF() {
  return getToken(GIScriptParser::FLOAT_DEF, 0);
}

GIScriptParser::FloatLiteralContext::FloatLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void GIScriptParser::FloatLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFloatLiteral(this);
}
void GIScriptParser::FloatLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFloatLiteral(this);
}

std::any GIScriptParser::FloatLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitFloatLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- KeywordLiteralContext ------------------------------------------------------------------

GIScriptParser::KeywordLiteralContext::KeywordLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void GIScriptParser::KeywordLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterKeywordLiteral(this);
}
void GIScriptParser::KeywordLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitKeywordLiteral(this);
}

std::any GIScriptParser::KeywordLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitKeywordLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IdentifierLiteralContext ------------------------------------------------------------------

tree::TerminalNode* GIScriptParser::IdentifierLiteralContext::ID() {
  return getToken(GIScriptParser::ID, 0);
}

GIScriptParser::IdentifierLiteralContext::IdentifierLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void GIScriptParser::IdentifierLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIdentifierLiteral(this);
}
void GIScriptParser::IdentifierLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIdentifierLiteral(this);
}

std::any GIScriptParser::IdentifierLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitIdentifierLiteral(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenExpressionContext ------------------------------------------------------------------

GIScriptParser::ExprContext* GIScriptParser::ParenExpressionContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}

GIScriptParser::ParenExpressionContext::ParenExpressionContext(PrimaryContext *ctx) { copyFrom(ctx); }

void GIScriptParser::ParenExpressionContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParenExpression(this);
}
void GIScriptParser::ParenExpressionContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParenExpression(this);
}

std::any GIScriptParser::ParenExpressionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitParenExpression(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeInitializerContext ------------------------------------------------------------------

GIScriptParser::SingleTypeContext* GIScriptParser::TypeInitializerContext::singleType() {
  return getRuleContext<GIScriptParser::SingleTypeContext>(0);
}

GIScriptParser::InitializerListContext* GIScriptParser::TypeInitializerContext::initializerList() {
  return getRuleContext<GIScriptParser::InitializerListContext>(0);
}

GIScriptParser::TypeInitializerContext::TypeInitializerContext(PrimaryContext *ctx) { copyFrom(ctx); }

void GIScriptParser::TypeInitializerContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypeInitializer(this);
}
void GIScriptParser::TypeInitializerContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypeInitializer(this);
}

std::any GIScriptParser::TypeInitializerContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitTypeInitializer(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntegerLiteralContext ------------------------------------------------------------------

tree::TerminalNode* GIScriptParser::IntegerLiteralContext::INT_DEF() {
  return getToken(GIScriptParser::INT_DEF, 0);
}

GIScriptParser::IntegerLiteralContext::IntegerLiteralContext(PrimaryContext *ctx) { copyFrom(ctx); }

void GIScriptParser::IntegerLiteralContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIntegerLiteral(this);
}
void GIScriptParser::IntegerLiteralContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIntegerLiteral(this);
}

std::any GIScriptParser::IntegerLiteralContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitIntegerLiteral(this);
  else
    return visitor->visitChildren(this);
}
GIScriptParser::PrimaryContext* GIScriptParser::primary() {
  PrimaryContext *_localctx = _tracker.createInstance<PrimaryContext>(_ctx, getState());
  enterRule(_localctx, 52, GIScriptParser::RulePrimary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(341);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::INT_DEF: {
        _localctx = _tracker.createInstance<GIScriptParser::IntegerLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(329);
        match(GIScriptParser::INT_DEF);
        break;
      }

      case GIScriptParser::FLOAT_DEF: {
        _localctx = _tracker.createInstance<GIScriptParser::FloatLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(330);
        match(GIScriptParser::FLOAT_DEF);
        break;
      }

      case GIScriptParser::STRING_DEF: {
        _localctx = _tracker.createInstance<GIScriptParser::StringLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(331);
        match(GIScriptParser::STRING_DEF);
        break;
      }

      case GIScriptParser::T__35:
      case GIScriptParser::T__36:
      case GIScriptParser::T__37:
      case GIScriptParser::T__38: {
        _localctx = _tracker.createInstance<GIScriptParser::KeywordLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(332);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 1030792151040) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        break;
      }

      case GIScriptParser::ID: {
        _localctx = _tracker.createInstance<GIScriptParser::IdentifierLiteralContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(333);
        match(GIScriptParser::ID);
        break;
      }

      case GIScriptParser::T__1: {
        _localctx = _tracker.createInstance<GIScriptParser::ParenExpressionContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(334);
        match(GIScriptParser::T__1);
        setState(335);
        expr();
        setState(336);
        match(GIScriptParser::T__2);
        break;
      }

      case GIScriptParser::T__6:
      case GIScriptParser::T__7:
      case GIScriptParser::T__8:
      case GIScriptParser::T__9:
      case GIScriptParser::T__10:
      case GIScriptParser::T__11:
      case GIScriptParser::T__12:
      case GIScriptParser::T__18:
      case GIScriptParser::T__19: {
        _localctx = _tracker.createInstance<GIScriptParser::TypeInitializerContext>(_localctx);
        enterOuterAlt(_localctx, 7);
        setState(338);
        singleType();
        setState(339);
        initializerList();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ArgumentListContext ------------------------------------------------------------------

GIScriptParser::ArgumentListContext::ArgumentListContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::AssignmentContext *> GIScriptParser::ArgumentListContext::assignment() {
  return getRuleContexts<GIScriptParser::AssignmentContext>();
}

GIScriptParser::AssignmentContext* GIScriptParser::ArgumentListContext::assignment(size_t i) {
  return getRuleContext<GIScriptParser::AssignmentContext>(i);
}


size_t GIScriptParser::ArgumentListContext::getRuleIndex() const {
  return GIScriptParser::RuleArgumentList;
}

void GIScriptParser::ArgumentListContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgumentList(this);
}

void GIScriptParser::ArgumentListContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgumentList(this);
}


std::any GIScriptParser::ArgumentListContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitArgumentList(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ArgumentListContext* GIScriptParser::argumentList() {
  ArgumentListContext *_localctx = _tracker.createInstance<ArgumentListContext>(_ctx, getState());
  enterRule(_localctx, 54, GIScriptParser::RuleArgumentList);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(343);
    assignment();
    setState(348);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GIScriptParser::T__5) {
      setState(344);
      match(GIScriptParser::T__5);
      setState(345);
      assignment();
      setState(350);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MemberAccessContext ------------------------------------------------------------------

GIScriptParser::MemberAccessContext::MemberAccessContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ExprContext* GIScriptParser::MemberAccessContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}

tree::TerminalNode* GIScriptParser::MemberAccessContext::ID() {
  return getToken(GIScriptParser::ID, 0);
}

GIScriptParser::SingleTypeContext* GIScriptParser::MemberAccessContext::singleType() {
  return getRuleContext<GIScriptParser::SingleTypeContext>(0);
}


size_t GIScriptParser::MemberAccessContext::getRuleIndex() const {
  return GIScriptParser::RuleMemberAccess;
}

void GIScriptParser::MemberAccessContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMemberAccess(this);
}

void GIScriptParser::MemberAccessContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMemberAccess(this);
}


std::any GIScriptParser::MemberAccessContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitMemberAccess(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::MemberAccessContext* GIScriptParser::memberAccess() {
  MemberAccessContext *_localctx = _tracker.createInstance<MemberAccessContext>(_ctx, getState());
  enterRule(_localctx, 56, GIScriptParser::RuleMemberAccess);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(357);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case GIScriptParser::T__39: {
        setState(351);
        match(GIScriptParser::T__39);
        setState(352);
        expr();
        setState(353);
        match(GIScriptParser::T__40);
        break;
      }

      case GIScriptParser::T__41: {
        setState(355);
        match(GIScriptParser::T__41);
        setState(356);
        match(GIScriptParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(361);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 34, _ctx)) {
    case 1: {
      setState(359);
      match(GIScriptParser::T__42);
      setState(360);
      singleType();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctionCallContext ------------------------------------------------------------------

GIScriptParser::FunctionCallContext::FunctionCallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ArgumentListContext* GIScriptParser::FunctionCallContext::argumentList() {
  return getRuleContext<GIScriptParser::ArgumentListContext>(0);
}

GIScriptParser::TypeContext* GIScriptParser::FunctionCallContext::type() {
  return getRuleContext<GIScriptParser::TypeContext>(0);
}


size_t GIScriptParser::FunctionCallContext::getRuleIndex() const {
  return GIScriptParser::RuleFunctionCall;
}

void GIScriptParser::FunctionCallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctionCall(this);
}

void GIScriptParser::FunctionCallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctionCall(this);
}


std::any GIScriptParser::FunctionCallContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitFunctionCall(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::FunctionCallContext* GIScriptParser::functionCall() {
  FunctionCallContext *_localctx = _tracker.createInstance<FunctionCallContext>(_ctx, getState());
  enterRule(_localctx, 58, GIScriptParser::RuleFunctionCall);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(363);
    match(GIScriptParser::T__1);
    setState(365);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 546388561117060) != 0) || ((((_la - 70) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 70)) & 15) != 0)) {
      setState(364);
      argumentList();
    }
    setState(367);
    match(GIScriptParser::T__2);
    setState(370);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 36, _ctx)) {
    case 1: {
      setState(368);
      match(GIScriptParser::T__42);
      setState(369);
      type();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IncrementContext ------------------------------------------------------------------

GIScriptParser::IncrementContext::IncrementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GIScriptParser::IncrementContext::getRuleIndex() const {
  return GIScriptParser::RuleIncrement;
}

void GIScriptParser::IncrementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIncrement(this);
}

void GIScriptParser::IncrementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIncrement(this);
}


std::any GIScriptParser::IncrementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitIncrement(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::IncrementContext* GIScriptParser::increment() {
  IncrementContext *_localctx = _tracker.createInstance<IncrementContext>(_ctx, getState());
  enterRule(_localctx, 60, GIScriptParser::RuleIncrement);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(372);
    _la = _input->LA(1);
    if (!(_la == GIScriptParser::T__43

    || _la == GIScriptParser::T__44)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PostfixContext ------------------------------------------------------------------

GIScriptParser::PostfixContext::PostfixContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::PrimaryContext* GIScriptParser::PostfixContext::primary() {
  return getRuleContext<GIScriptParser::PrimaryContext>(0);
}

std::vector<GIScriptParser::MemberAccessContext *> GIScriptParser::PostfixContext::memberAccess() {
  return getRuleContexts<GIScriptParser::MemberAccessContext>();
}

GIScriptParser::MemberAccessContext* GIScriptParser::PostfixContext::memberAccess(size_t i) {
  return getRuleContext<GIScriptParser::MemberAccessContext>(i);
}

std::vector<GIScriptParser::FunctionCallContext *> GIScriptParser::PostfixContext::functionCall() {
  return getRuleContexts<GIScriptParser::FunctionCallContext>();
}

GIScriptParser::FunctionCallContext* GIScriptParser::PostfixContext::functionCall(size_t i) {
  return getRuleContext<GIScriptParser::FunctionCallContext>(i);
}

std::vector<GIScriptParser::IncrementContext *> GIScriptParser::PostfixContext::increment() {
  return getRuleContexts<GIScriptParser::IncrementContext>();
}

GIScriptParser::IncrementContext* GIScriptParser::PostfixContext::increment(size_t i) {
  return getRuleContext<GIScriptParser::IncrementContext>(i);
}


size_t GIScriptParser::PostfixContext::getRuleIndex() const {
  return GIScriptParser::RulePostfix;
}

void GIScriptParser::PostfixContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPostfix(this);
}

void GIScriptParser::PostfixContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPostfix(this);
}


std::any GIScriptParser::PostfixContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitPostfix(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::PostfixContext* GIScriptParser::postfix() {
  PostfixContext *_localctx = _tracker.createInstance<PostfixContext>(_ctx, getState());
  enterRule(_localctx, 62, GIScriptParser::RulePostfix);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(374);
    primary();
    setState(380);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(378);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case GIScriptParser::T__39:
          case GIScriptParser::T__41: {
            setState(375);
            memberAccess();
            break;
          }

          case GIScriptParser::T__1: {
            setState(376);
            functionCall();
            break;
          }

          case GIScriptParser::T__43:
          case GIScriptParser::T__44: {
            setState(377);
            increment();
            break;
          }

        default:
          throw NoViableAltException(this);
        } 
      }
      setState(382);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 38, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- CastContext ------------------------------------------------------------------

GIScriptParser::CastContext::CastContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::SingleTypeContext* GIScriptParser::CastContext::singleType() {
  return getRuleContext<GIScriptParser::SingleTypeContext>(0);
}

GIScriptParser::CastContext* GIScriptParser::CastContext::cast() {
  return getRuleContext<GIScriptParser::CastContext>(0);
}

GIScriptParser::UnaryContext* GIScriptParser::CastContext::unary() {
  return getRuleContext<GIScriptParser::UnaryContext>(0);
}


size_t GIScriptParser::CastContext::getRuleIndex() const {
  return GIScriptParser::RuleCast;
}

void GIScriptParser::CastContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCast(this);
}

void GIScriptParser::CastContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCast(this);
}


std::any GIScriptParser::CastContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitCast(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::CastContext* GIScriptParser::cast() {
  CastContext *_localctx = _tracker.createInstance<CastContext>(_ctx, getState());
  enterRule(_localctx, 64, GIScriptParser::RuleCast);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(389);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 39, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(383);
      match(GIScriptParser::T__1);
      setState(384);
      singleType();
      setState(385);
      match(GIScriptParser::T__2);
      setState(386);
      cast();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(388);
      unary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- UnaryContext ------------------------------------------------------------------

GIScriptParser::UnaryContext::UnaryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::PostfixContext* GIScriptParser::UnaryContext::postfix() {
  return getRuleContext<GIScriptParser::PostfixContext>(0);
}

GIScriptParser::CastContext* GIScriptParser::UnaryContext::cast() {
  return getRuleContext<GIScriptParser::CastContext>(0);
}

GIScriptParser::PrimaryContext* GIScriptParser::UnaryContext::primary() {
  return getRuleContext<GIScriptParser::PrimaryContext>(0);
}

std::vector<GIScriptParser::IncrementContext *> GIScriptParser::UnaryContext::increment() {
  return getRuleContexts<GIScriptParser::IncrementContext>();
}

GIScriptParser::IncrementContext* GIScriptParser::UnaryContext::increment(size_t i) {
  return getRuleContext<GIScriptParser::IncrementContext>(i);
}


size_t GIScriptParser::UnaryContext::getRuleIndex() const {
  return GIScriptParser::RuleUnary;
}

void GIScriptParser::UnaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterUnary(this);
}

void GIScriptParser::UnaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitUnary(this);
}


std::any GIScriptParser::UnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitUnary(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::UnaryContext* GIScriptParser::unary() {
  UnaryContext *_localctx = _tracker.createInstance<UnaryContext>(_ctx, getState());
  enterRule(_localctx, 66, GIScriptParser::RuleUnary);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(394);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GIScriptParser::T__43

    || _la == GIScriptParser::T__44) {
      setState(391);
      increment();
      setState(396);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(401);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 41, _ctx)) {
    case 1: {
      setState(397);
      postfix();
      break;
    }

    case 2: {
      setState(398);
      antlrcpp::downCast<UnaryContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 492581209243648) != 0))) {
        antlrcpp::downCast<UnaryContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(399);
      cast();
      break;
    }

    case 3: {
      setState(400);
      primary();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MultiplicativeContext ------------------------------------------------------------------

GIScriptParser::MultiplicativeContext::MultiplicativeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::CastContext* GIScriptParser::MultiplicativeContext::cast() {
  return getRuleContext<GIScriptParser::CastContext>(0);
}

GIScriptParser::MultiplicativeContext* GIScriptParser::MultiplicativeContext::multiplicative() {
  return getRuleContext<GIScriptParser::MultiplicativeContext>(0);
}


size_t GIScriptParser::MultiplicativeContext::getRuleIndex() const {
  return GIScriptParser::RuleMultiplicative;
}

void GIScriptParser::MultiplicativeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterMultiplicative(this);
}

void GIScriptParser::MultiplicativeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitMultiplicative(this);
}


std::any GIScriptParser::MultiplicativeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitMultiplicative(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::MultiplicativeContext* GIScriptParser::multiplicative() {
   return multiplicative(0);
}

GIScriptParser::MultiplicativeContext* GIScriptParser::multiplicative(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::MultiplicativeContext *_localctx = _tracker.createInstance<MultiplicativeContext>(_ctx, parentState);
  GIScriptParser::MultiplicativeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 68;
  enterRecursionRule(_localctx, 68, GIScriptParser::RuleMultiplicative, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(404);
    cast();
    _ctx->stop = _input->LT(-1);
    setState(411);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<MultiplicativeContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleMultiplicative);
        setState(406);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(407);
        antlrcpp::downCast<MultiplicativeContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 3940649673949184) != 0))) {
          antlrcpp::downCast<MultiplicativeContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(408);
        cast(); 
      }
      setState(413);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AdditiveContext ------------------------------------------------------------------

GIScriptParser::AdditiveContext::AdditiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::MultiplicativeContext* GIScriptParser::AdditiveContext::multiplicative() {
  return getRuleContext<GIScriptParser::MultiplicativeContext>(0);
}

GIScriptParser::AdditiveContext* GIScriptParser::AdditiveContext::additive() {
  return getRuleContext<GIScriptParser::AdditiveContext>(0);
}


size_t GIScriptParser::AdditiveContext::getRuleIndex() const {
  return GIScriptParser::RuleAdditive;
}

void GIScriptParser::AdditiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAdditive(this);
}

void GIScriptParser::AdditiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAdditive(this);
}


std::any GIScriptParser::AdditiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitAdditive(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::AdditiveContext* GIScriptParser::additive() {
   return additive(0);
}

GIScriptParser::AdditiveContext* GIScriptParser::additive(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::AdditiveContext *_localctx = _tracker.createInstance<AdditiveContext>(_ctx, parentState);
  GIScriptParser::AdditiveContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 70;
  enterRecursionRule(_localctx, 70, GIScriptParser::RuleAdditive, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(415);
    multiplicative(0);
    _ctx->stop = _input->LT(-1);
    setState(422);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AdditiveContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAdditive);
        setState(417);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(418);
        antlrcpp::downCast<AdditiveContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == GIScriptParser::T__45

        || _la == GIScriptParser::T__51)) {
          antlrcpp::downCast<AdditiveContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(419);
        multiplicative(0); 
      }
      setState(424);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ShiftContext ------------------------------------------------------------------

GIScriptParser::ShiftContext::ShiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::AdditiveContext* GIScriptParser::ShiftContext::additive() {
  return getRuleContext<GIScriptParser::AdditiveContext>(0);
}

GIScriptParser::ShiftContext* GIScriptParser::ShiftContext::shift() {
  return getRuleContext<GIScriptParser::ShiftContext>(0);
}


size_t GIScriptParser::ShiftContext::getRuleIndex() const {
  return GIScriptParser::RuleShift;
}

void GIScriptParser::ShiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterShift(this);
}

void GIScriptParser::ShiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitShift(this);
}


std::any GIScriptParser::ShiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitShift(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::ShiftContext* GIScriptParser::shift() {
   return shift(0);
}

GIScriptParser::ShiftContext* GIScriptParser::shift(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::ShiftContext *_localctx = _tracker.createInstance<ShiftContext>(_ctx, parentState);
  GIScriptParser::ShiftContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 72;
  enterRecursionRule(_localctx, 72, GIScriptParser::RuleShift, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(426);
    additive(0);
    _ctx->stop = _input->LT(-1);
    setState(433);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<ShiftContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleShift);
        setState(428);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(429);
        antlrcpp::downCast<ShiftContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 63050394783186944) != 0))) {
          antlrcpp::downCast<ShiftContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(430);
        additive(0); 
      }
      setState(435);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 44, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- RelationalContext ------------------------------------------------------------------

GIScriptParser::RelationalContext::RelationalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ShiftContext* GIScriptParser::RelationalContext::shift() {
  return getRuleContext<GIScriptParser::ShiftContext>(0);
}

GIScriptParser::RelationalContext* GIScriptParser::RelationalContext::relational() {
  return getRuleContext<GIScriptParser::RelationalContext>(0);
}


size_t GIScriptParser::RelationalContext::getRuleIndex() const {
  return GIScriptParser::RuleRelational;
}

void GIScriptParser::RelationalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRelational(this);
}

void GIScriptParser::RelationalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRelational(this);
}


std::any GIScriptParser::RelationalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitRelational(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::RelationalContext* GIScriptParser::relational() {
   return relational(0);
}

GIScriptParser::RelationalContext* GIScriptParser::relational(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::RelationalContext *_localctx = _tracker.createInstance<RelationalContext>(_ctx, parentState);
  GIScriptParser::RelationalContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, GIScriptParser::RuleRelational, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(437);
    shift(0);
    _ctx->stop = _input->LT(-1);
    setState(444);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<RelationalContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleRelational);
        setState(439);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(440);
        antlrcpp::downCast<RelationalContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 216172782114062336) != 0))) {
          antlrcpp::downCast<RelationalContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(441);
        shift(0); 
      }
      setState(446);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 45, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- EqualityContext ------------------------------------------------------------------

GIScriptParser::EqualityContext::EqualityContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::RelationalContext* GIScriptParser::EqualityContext::relational() {
  return getRuleContext<GIScriptParser::RelationalContext>(0);
}

GIScriptParser::EqualityContext* GIScriptParser::EqualityContext::equality() {
  return getRuleContext<GIScriptParser::EqualityContext>(0);
}


size_t GIScriptParser::EqualityContext::getRuleIndex() const {
  return GIScriptParser::RuleEquality;
}

void GIScriptParser::EqualityContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterEquality(this);
}

void GIScriptParser::EqualityContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitEquality(this);
}


std::any GIScriptParser::EqualityContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitEquality(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::EqualityContext* GIScriptParser::equality() {
   return equality(0);
}

GIScriptParser::EqualityContext* GIScriptParser::equality(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::EqualityContext *_localctx = _tracker.createInstance<EqualityContext>(_ctx, parentState);
  GIScriptParser::EqualityContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 76;
  enterRecursionRule(_localctx, 76, GIScriptParser::RuleEquality, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(448);
    relational(0);
    _ctx->stop = _input->LT(-1);
    setState(455);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<EqualityContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleEquality);
        setState(450);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(451);
        antlrcpp::downCast<EqualityContext *>(_localctx)->op = _input->LT(1);
        _la = _input->LA(1);
        if (!(_la == GIScriptParser::T__57

        || _la == GIScriptParser::T__58)) {
          antlrcpp::downCast<EqualityContext *>(_localctx)->op = _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(452);
        relational(0); 
      }
      setState(457);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 46, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- AndContext ------------------------------------------------------------------

GIScriptParser::AndContext::AndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::EqualityContext* GIScriptParser::AndContext::equality() {
  return getRuleContext<GIScriptParser::EqualityContext>(0);
}

GIScriptParser::AndContext* GIScriptParser::AndContext::and_() {
  return getRuleContext<GIScriptParser::AndContext>(0);
}


size_t GIScriptParser::AndContext::getRuleIndex() const {
  return GIScriptParser::RuleAnd;
}

void GIScriptParser::AndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAnd(this);
}

void GIScriptParser::AndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAnd(this);
}


std::any GIScriptParser::AndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitAnd(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::AndContext* GIScriptParser::and_() {
   return and_(0);
}

GIScriptParser::AndContext* GIScriptParser::and_(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::AndContext *_localctx = _tracker.createInstance<AndContext>(_ctx, parentState);
  GIScriptParser::AndContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 78;
  enterRecursionRule(_localctx, 78, GIScriptParser::RuleAnd, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(459);
    equality(0);
    _ctx->stop = _input->LT(-1);
    setState(466);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<AndContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleAnd);
        setState(461);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(462);
        match(GIScriptParser::T__59);
        setState(463);
        equality(0); 
      }
      setState(468);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 47, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- XorContext ------------------------------------------------------------------

GIScriptParser::XorContext::XorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::AndContext* GIScriptParser::XorContext::and_() {
  return getRuleContext<GIScriptParser::AndContext>(0);
}

GIScriptParser::XorContext* GIScriptParser::XorContext::xor_() {
  return getRuleContext<GIScriptParser::XorContext>(0);
}


size_t GIScriptParser::XorContext::getRuleIndex() const {
  return GIScriptParser::RuleXor;
}

void GIScriptParser::XorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterXor(this);
}

void GIScriptParser::XorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitXor(this);
}


std::any GIScriptParser::XorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitXor(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::XorContext* GIScriptParser::xor_() {
   return xor_(0);
}

GIScriptParser::XorContext* GIScriptParser::xor_(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::XorContext *_localctx = _tracker.createInstance<XorContext>(_ctx, parentState);
  GIScriptParser::XorContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 80;
  enterRecursionRule(_localctx, 80, GIScriptParser::RuleXor, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(470);
    and_(0);
    _ctx->stop = _input->LT(-1);
    setState(477);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<XorContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleXor);
        setState(472);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(473);
        match(GIScriptParser::T__60);
        setState(474);
        and_(0); 
      }
      setState(479);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- OrContext ------------------------------------------------------------------

GIScriptParser::OrContext::OrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::XorContext* GIScriptParser::OrContext::xor_() {
  return getRuleContext<GIScriptParser::XorContext>(0);
}

GIScriptParser::OrContext* GIScriptParser::OrContext::or_() {
  return getRuleContext<GIScriptParser::OrContext>(0);
}


size_t GIScriptParser::OrContext::getRuleIndex() const {
  return GIScriptParser::RuleOr;
}

void GIScriptParser::OrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOr(this);
}

void GIScriptParser::OrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOr(this);
}


std::any GIScriptParser::OrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitOr(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::OrContext* GIScriptParser::or_() {
   return or_(0);
}

GIScriptParser::OrContext* GIScriptParser::or_(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::OrContext *_localctx = _tracker.createInstance<OrContext>(_ctx, parentState);
  GIScriptParser::OrContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 82;
  enterRecursionRule(_localctx, 82, GIScriptParser::RuleOr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(481);
    xor_(0);
    _ctx->stop = _input->LT(-1);
    setState(488);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<OrContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleOr);
        setState(483);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(484);
        match(GIScriptParser::T__61);
        setState(485);
        xor_(0); 
      }
      setState(490);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalAndContext ------------------------------------------------------------------

GIScriptParser::LogicalAndContext::LogicalAndContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::OrContext* GIScriptParser::LogicalAndContext::or_() {
  return getRuleContext<GIScriptParser::OrContext>(0);
}

GIScriptParser::LogicalAndContext* GIScriptParser::LogicalAndContext::logicalAnd() {
  return getRuleContext<GIScriptParser::LogicalAndContext>(0);
}


size_t GIScriptParser::LogicalAndContext::getRuleIndex() const {
  return GIScriptParser::RuleLogicalAnd;
}

void GIScriptParser::LogicalAndContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalAnd(this);
}

void GIScriptParser::LogicalAndContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalAnd(this);
}


std::any GIScriptParser::LogicalAndContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalAnd(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::LogicalAndContext* GIScriptParser::logicalAnd() {
   return logicalAnd(0);
}

GIScriptParser::LogicalAndContext* GIScriptParser::logicalAnd(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::LogicalAndContext *_localctx = _tracker.createInstance<LogicalAndContext>(_ctx, parentState);
  GIScriptParser::LogicalAndContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 84;
  enterRecursionRule(_localctx, 84, GIScriptParser::RuleLogicalAnd, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(492);
    or_(0);
    _ctx->stop = _input->LT(-1);
    setState(499);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalAndContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalAnd);
        setState(494);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(495);
        match(GIScriptParser::T__62);
        setState(496);
        or_(0); 
      }
      setState(501);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 50, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- LogicalOrContext ------------------------------------------------------------------

GIScriptParser::LogicalOrContext::LogicalOrContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::LogicalAndContext* GIScriptParser::LogicalOrContext::logicalAnd() {
  return getRuleContext<GIScriptParser::LogicalAndContext>(0);
}

GIScriptParser::LogicalOrContext* GIScriptParser::LogicalOrContext::logicalOr() {
  return getRuleContext<GIScriptParser::LogicalOrContext>(0);
}


size_t GIScriptParser::LogicalOrContext::getRuleIndex() const {
  return GIScriptParser::RuleLogicalOr;
}

void GIScriptParser::LogicalOrContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLogicalOr(this);
}

void GIScriptParser::LogicalOrContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLogicalOr(this);
}


std::any GIScriptParser::LogicalOrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitLogicalOr(this);
  else
    return visitor->visitChildren(this);
}


GIScriptParser::LogicalOrContext* GIScriptParser::logicalOr() {
   return logicalOr(0);
}

GIScriptParser::LogicalOrContext* GIScriptParser::logicalOr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  GIScriptParser::LogicalOrContext *_localctx = _tracker.createInstance<LogicalOrContext>(_ctx, parentState);
  GIScriptParser::LogicalOrContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 86;
  enterRecursionRule(_localctx, 86, GIScriptParser::RuleLogicalOr, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(503);
    logicalAnd(0);
    _ctx->stop = _input->LT(-1);
    setState(510);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        _localctx = _tracker.createInstance<LogicalOrContext>(parentContext, parentState);
        pushNewRecursionContext(_localctx, startState, RuleLogicalOr);
        setState(505);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(506);
        match(GIScriptParser::T__63);
        setState(507);
        logicalAnd(0); 
      }
      setState(512);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ConditionalContext ------------------------------------------------------------------

GIScriptParser::ConditionalContext::ConditionalContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::LogicalOrContext* GIScriptParser::ConditionalContext::logicalOr() {
  return getRuleContext<GIScriptParser::LogicalOrContext>(0);
}

GIScriptParser::ExprContext* GIScriptParser::ConditionalContext::expr() {
  return getRuleContext<GIScriptParser::ExprContext>(0);
}

GIScriptParser::ConditionalContext* GIScriptParser::ConditionalContext::conditional() {
  return getRuleContext<GIScriptParser::ConditionalContext>(0);
}


size_t GIScriptParser::ConditionalContext::getRuleIndex() const {
  return GIScriptParser::RuleConditional;
}

void GIScriptParser::ConditionalContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterConditional(this);
}

void GIScriptParser::ConditionalContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitConditional(this);
}


std::any GIScriptParser::ConditionalContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitConditional(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ConditionalContext* GIScriptParser::conditional() {
  ConditionalContext *_localctx = _tracker.createInstance<ConditionalContext>(_ctx, getState());
  enterRule(_localctx, 88, GIScriptParser::RuleConditional);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(513);
    logicalOr(0);
    setState(519);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GIScriptParser::T__64) {
      setState(514);
      match(GIScriptParser::T__64);
      setState(515);
      expr();
      setState(516);
      match(GIScriptParser::T__31);
      setState(517);
      conditional();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignmentContext ------------------------------------------------------------------

GIScriptParser::AssignmentContext::AssignmentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GIScriptParser::ConditionalContext* GIScriptParser::AssignmentContext::conditional() {
  return getRuleContext<GIScriptParser::ConditionalContext>(0);
}

GIScriptParser::UnaryContext* GIScriptParser::AssignmentContext::unary() {
  return getRuleContext<GIScriptParser::UnaryContext>(0);
}

GIScriptParser::InitializerContext* GIScriptParser::AssignmentContext::initializer() {
  return getRuleContext<GIScriptParser::InitializerContext>(0);
}


size_t GIScriptParser::AssignmentContext::getRuleIndex() const {
  return GIScriptParser::RuleAssignment;
}

void GIScriptParser::AssignmentContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssignment(this);
}

void GIScriptParser::AssignmentContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssignment(this);
}


std::any GIScriptParser::AssignmentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitAssignment(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::AssignmentContext* GIScriptParser::assignment() {
  AssignmentContext *_localctx = _tracker.createInstance<AssignmentContext>(_ctx, getState());
  enterRule(_localctx, 90, GIScriptParser::RuleAssignment);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(526);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 53, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(521);
      conditional();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(522);
      unary();
      setState(523);
      antlrcpp::downCast<AssignmentContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!(((((_la - 25) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 25)) & 32985348833281) != 0))) {
        antlrcpp::downCast<AssignmentContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(524);
      initializer();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

GIScriptParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<GIScriptParser::AssignmentContext *> GIScriptParser::ExprContext::assignment() {
  return getRuleContexts<GIScriptParser::AssignmentContext>();
}

GIScriptParser::AssignmentContext* GIScriptParser::ExprContext::assignment(size_t i) {
  return getRuleContext<GIScriptParser::AssignmentContext>(i);
}


size_t GIScriptParser::ExprContext::getRuleIndex() const {
  return GIScriptParser::RuleExpr;
}

void GIScriptParser::ExprContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr(this);
}

void GIScriptParser::ExprContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GIScriptListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr(this);
}


std::any GIScriptParser::ExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<GIScriptVisitor*>(visitor))
    return parserVisitor->visitExpr(this);
  else
    return visitor->visitChildren(this);
}

GIScriptParser::ExprContext* GIScriptParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 92, GIScriptParser::RuleExpr);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(528);
    assignment();
    setState(533);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GIScriptParser::T__5) {
      setState(529);
      match(GIScriptParser::T__5);
      setState(530);
      assignment();
      setState(535);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool GIScriptParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 34: return multiplicativeSempred(antlrcpp::downCast<MultiplicativeContext *>(context), predicateIndex);
    case 35: return additiveSempred(antlrcpp::downCast<AdditiveContext *>(context), predicateIndex);
    case 36: return shiftSempred(antlrcpp::downCast<ShiftContext *>(context), predicateIndex);
    case 37: return relationalSempred(antlrcpp::downCast<RelationalContext *>(context), predicateIndex);
    case 38: return equalitySempred(antlrcpp::downCast<EqualityContext *>(context), predicateIndex);
    case 39: return andSempred(antlrcpp::downCast<AndContext *>(context), predicateIndex);
    case 40: return xorSempred(antlrcpp::downCast<XorContext *>(context), predicateIndex);
    case 41: return orSempred(antlrcpp::downCast<OrContext *>(context), predicateIndex);
    case 42: return logicalAndSempred(antlrcpp::downCast<LogicalAndContext *>(context), predicateIndex);
    case 43: return logicalOrSempred(antlrcpp::downCast<LogicalOrContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::multiplicativeSempred(MultiplicativeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::additiveSempred(AdditiveContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::shiftSempred(ShiftContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 2: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::relationalSempred(RelationalContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::equalitySempred(EqualityContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::andSempred(AndContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::xorSempred(XorContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::orSempred(OrContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::logicalAndSempred(LogicalAndContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool GIScriptParser::logicalOrSempred(LogicalOrContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void GIScriptParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  giscriptParserInitialize();
#else
  ::antlr4::internal::call_once(giscriptParserOnceFlag, giscriptParserInitialize);
#endif
}
