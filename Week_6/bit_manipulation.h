#ifndef _BIT_MANIPULATION_H_
#define _BIT_MANIPULATION_H_

#define SetBit(Reg,bitNum)      (Reg |= (1 << bitNum))
#define ClearBit(Reg,bitNum)    (Reg &= ~(1 << bitNum))
#define ToggleBit(Reg,bitNum)   (Reg ^= (1 << bitNum))
#define ShiftRight(Reg,bitNum)  (Reg = (Reg >> bitNum))
#define ShiftLeft(Reg,bitNum)   (Reg = (Reg << bitNum))

#endif