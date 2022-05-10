
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LuminusLexer : public antlr4::Lexer {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, MUL = 10, DIV = 11, MOD = 12, ADD = 13, SUB = 14, 
    LT = 15, GT = 16, LTE = 17, GTE = 18, EQ = 19, NOT_EQ = 20, LOG_AND = 21, 
    LOG_OR = 22, LOG_NOT = 23, TRUE_CONST = 24, FALSE_CONST = 25, VOID = 26, 
    STRING_CONST = 27, INTEGER_LITERAL = 28, FLOAT_LITERAL = 29, DIGIT = 30, 
    FUNCTION = 31, ARROW = 32, WHILE = 33, FOR = 34, RETURN = 35, IF = 36, 
    ELIF = 37, ELSE = 38, NEW = 39, DELETE = 40, TYPE = 41, INT = 42, BYTE = 43, 
    LONG = 44, DOUBLE = 45, STRING = 46, BOOL = 47, IDENTIFIER = 48, FUNC_OOP_MODIFIERS = 49, 
    FUNC_VISIBILITY_MODIFIERS = 50, WHITESPACE = 51
  };

  explicit LuminusLexer(antlr4::CharStream *input);
  ~LuminusLexer();

  virtual std::string getGrammarFileName() const override;
  virtual const std::vector<std::string>& getRuleNames() const override;

  virtual const std::vector<std::string>& getChannelNames() const override;
  virtual const std::vector<std::string>& getModeNames() const override;
  virtual const std::vector<std::string>& getTokenNames() const override; // deprecated, use vocabulary instead
  virtual antlr4::dfa::Vocabulary& getVocabulary() const override;

  virtual const std::vector<uint16_t> getSerializedATN() const override;
  virtual const antlr4::atn::ATN& getATN() const override;

private:
  static std::vector<antlr4::dfa::DFA> _decisionToDFA;
  static antlr4::atn::PredictionContextCache _sharedContextCache;
  static std::vector<std::string> _ruleNames;
  static std::vector<std::string> _tokenNames;
  static std::vector<std::string> _channelNames;
  static std::vector<std::string> _modeNames;

  static std::vector<std::string> _literalNames;
  static std::vector<std::string> _symbolicNames;
  static antlr4::dfa::Vocabulary _vocabulary;
  static antlr4::atn::ATN _atn;
  static std::vector<uint16_t> _serializedATN;


  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

  struct Initializer {
    Initializer();
  };
  static Initializer _init;
};

