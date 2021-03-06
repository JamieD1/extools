#pragma once

#include "instruction.h"
#include "disassembler.h"



ADD_INSTR(NOT)
ADD_INSTR(TEQ)
ADD_INSTR(TNE)
ADD_INSTR(TL)
ADD_INSTR(TG)
ADD_INSTR(TLE)
ADD_INSTR(TGE)
ADD_INSTR(ANEG)
ADD_INSTR(ADD)
ADD_INSTR(SUB)
ADD_INSTR(MUL)
ADD_INSTR(DIV)
ADD_INSTR(MOD)
ADD_INSTR(ROUND)
ADD_INSTR(ROUNDN)
ADD_INSTR_VAR(AUGADD)
ADD_INSTR_VAR(AUGSUB)
ADD_INSTR_VAR(AUGMUL)
ADD_INSTR_VAR(AUGDIV)
ADD_INSTR_VAR(AUGMOD)
ADD_INSTR_VAR(AUGAND)
ADD_INSTR_VAR(AUGOR)
ADD_INSTR_VAR(AUGXOR)
ADD_INSTR_VAR(AUGLSHIFT)
ADD_INSTR_VAR(AUGRSHIFT)
ADD_INSTR_VAR(INC)
ADD_INSTR_VAR(DEC)
ADD_INSTR(ABS)
ADD_INSTR(MD5)
ADD_INSTR(SQRT)
ADD_INSTR(POW)
ADD_INSTR(SIN)
ADD_INSTR(COS)
ADD_INSTR(BINARY_AND)
ADD_INSTR(BINARY_OR)
ADD_INSTR(BINARY_XOR)
ADD_INSTR(BITWISE_NOT)
ADD_INSTR(LSHIFT)
ADD_INSTR(RSHIFT)
ADD_INSTR_VAR(POST_INC)
ADD_INSTR_VAR(PRE_INC)
ADD_INSTR_VAR(POST_DEC)
ADD_INSTR_VAR(PRE_DEC)