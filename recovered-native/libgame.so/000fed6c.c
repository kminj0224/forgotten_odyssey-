/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fed6c  Symbol: ~Hero1 */

/* Hero1::~Hero1() */

void __thiscall Hero1::~Hero1(Hero1 *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000fedb8 + 0xfed76);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x144;
  iVar1 = DAT_000fedbc;
  *(int *)(this + 0x100) = iVar2 + 0x174;
  *(int *)(this + 0x104) = iVar2 + 0x180;
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(iVar1 + 0xfed9c));
}


