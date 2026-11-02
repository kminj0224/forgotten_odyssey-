/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a824  Symbol: update */

/* cocos2d::CCWaves3D::update(float) */

void __thiscall cocos2d::CCWaves3D::update(CCWaves3D *this,float param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  int iVar3;
  char *pcVar4;
  float __x;
  undefined8 uVar5;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar3 = 0;
  pcVar4 = (char *)(DAT_0013a8cc + 0x13a834);
  while( true ) {
    if (*(int *)(this + 0x2c) < iVar3) {
      return;
    }
    if (-1 < *(int *)(this + 0x30)) break;
    iVar3 = iVar3 + 1;
  }
  CCGrid3DAction::originalVertex((CCGrid3DAction *)&local_24,(_ccGridSize *)this);
  uVar1 = __mulsf3(in_r1,DAT_0013a8d0);
  uVar2 = __floatsisf(*(undefined4 *)(this + 0x34));
  uVar1 = __mulsf3(uVar1,uVar2);
  uVar1 = __addsf3(uVar1,uVar1);
  uVar2 = __addsf3(local_20,local_24);
  uVar2 = __mulsf3(uVar2,DAT_0013a8d4);
  __x = (float)__addsf3(uVar1,uVar2);
  sinf(__x);
  uVar1 = __mulsf3();
  uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x3c));
  local_1c = __addsf3(local_1c,uVar1);
  uVar5 = __extendsfdf2(uVar1);
  uVar1 = (undefined4)((ulonglong)uVar5 >> 0x20);
                    /* WARNING: Subroutine does not return */
  CCLog(pcVar4,uVar1,(int)uVar5,uVar1);
}


