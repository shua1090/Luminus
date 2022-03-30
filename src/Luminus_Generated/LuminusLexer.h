
// Generated from Luminus.g4 by ANTLR 4.9.3

#pragma once


#include "antlr4-runtime.h"




class  LuminusLexer : public antlr4::Lexer {
public:
  enum {
      T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7,
      T__7 = 8, T__8 = 9, T__9 = 10, MUL = 11, DIV = 12, ADD = 13, SUB = 14,
      LESS_THAN = 15, GREATER_THAN = 16, LESS_THAN_EQUAL = 17, GREATER_THAN_EQUAL = 18,
      EQUAL_TO = 19, TRUE_CONST = 20, FALSE_CONST = 21, VOID = 22, TYPE = 23,
      IDENTIFIER = 24, INTEGER_CONST = 25, FLOATING_CONST = 26, DIGIT = 27,
      OCTAL_DIG = 28, HEX_DIG = 29, WHITESPACE = 30
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

