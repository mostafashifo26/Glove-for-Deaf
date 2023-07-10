/*
 * Bit_Math.h
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_
#define SetBit(Reg,BitNo) (Reg |= (1<<BitNo))
#define ClearBit(Reg,BitNo) (Reg &=~ (1<<BitNo))
#define ToggleBit(Reg,BitNo) (Reg ^= (1<<BitNo))
#define GetBit(Reg,BitNo) ((Reg>>BitNo)&1)
//#define GetBit(Reg,BitNo) ((Reg & (1<<BitNo))>>BitNo)

#endif /* BIT_MATH_H_ */