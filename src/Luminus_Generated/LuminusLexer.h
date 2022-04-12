
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LuminusLexer : public antlr4::Lexer {
public:
  enum {
      T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7,
      T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14,
      T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, T__18 = 19, T__19 = 20,
      MUL = 21, DIV = 22, MOD = 23, ADD = 24, SUB = 25, LT = 26, GT = 27,
      LTE = 28, GTE = 29, EQ = 30, NOT_EQ = 31, LOG_AND = 32, LOG_OR = 33,
      LOG_NOT = 34, TRUE_CONST = 35, FALSE_CONST = 36, VOID = 37, TYPE = 38,
      INT = 39, BYTE = 40, LONG = 41, DOUBLE = 42, STRING = 43, BOOL = 44,
      IDENTIFIER = 45, STRING_CONST = 46, INTEGER_CONST = 47, FLOATING_CONST = 48,
      DIGIT = 49, WHITESPACE = 50
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

