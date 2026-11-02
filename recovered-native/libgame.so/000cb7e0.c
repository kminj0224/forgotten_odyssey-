/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb7e0  Symbol: ~StageSelectChild */

/* StageSelectChild::~StageSelectChild() */

void __thiscall StageSelectChild::~StageSelectChild(StageSelectChild *this)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000cb81c + 0xcb7ea);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x138;
  iVar1 = DAT_000cb820;
  *(int *)(this + 0x100) = iVar2 + 0x168;
  *(int *)(this + 0x104) = iVar2 + 0x174;
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(iVar1 + 0xcb810));
}


