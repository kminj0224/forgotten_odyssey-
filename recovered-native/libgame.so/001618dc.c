/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001618dc  Symbol: VolatileTexture */

/* cocos2d::VolatileTexture::VolatileTexture(cocos2d::CCTexture2D*) */

VolatileTexture * __thiscall
cocos2d::VolatileTexture::VolatileTexture(VolatileTexture *this,CCTexture2D *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined8 uVar3;
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  undefined4 local_18;
  undefined4 local_14;
  
  iVar2 = DAT_0016195c;
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(CCTexture2D **)this = param_1;
  CCSize::CCSize((CCSize *)(this + 0xc));
  iVar2 = iVar2 + 0x1618f8;
  *(undefined4 *)(this + 0x14) = 1;
  FUN_001eed40(this + 0x18,iVar2,auStack_24);
  *(undefined4 *)(this + 0x1c) = 1;
  CCSize::CCSize((CCSize *)(this + 0x20));
  *(undefined4 *)(this + 0x28) = 1;
  FUN_001eed40(this + 0x2c,iVar2,auStack_20);
  uVar3 = FUN_001eed40(this + 0x30,iVar2,auStack_1c);
  *(undefined4 *)(this + 0x34) = 0;
  CCSize::CCSize((CCSize *)&local_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  *(undefined4 *)(this + 0x20) = local_18;
  *(undefined4 *)(this + 0x24) = local_14;
  pvVar1 = operator_new(0xc);
  if (pvVar1 != (void *)0xfffffff8) {
    *(VolatileTexture **)((int)pvVar1 + 8) = this;
  }
  FUN_001c5578(pvVar1,*(undefined4 *)(DAT_00161960 + 0x161950));
  return this;
}


