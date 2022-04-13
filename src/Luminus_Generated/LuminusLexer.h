
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LuminusLexer : public antlr4::Lexer {
public:
  enum {
      T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7,
      T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14,
      T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20,
      T__20 = 21, T__21 = 22, MUL = 23, DIV = 24, MOD = 25, ADD = 26, SUB = 27,
      LT = 28, GT = 29, LTE = 30, GTE = 31, EQ = 32, NOT_EQ = 33, LOG_AND = 34,
      LOG_OR = 35, LOG_NOT = 36, TRUE_CONST = 37, FALSE_CONST = 38, VOID = 39,
      TYPE = 40, INT = 41, BYTE = 42, LONG = 43, DOUBLE = 44, STRING = 45,
      BOOL = 46, IDENTIFIER = 47, STRING_CONST = 48, INTEGER_CONST = 49, FLOATING_CONST = 50,
      DIGIT = 51, WHITESPACE = 52
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

