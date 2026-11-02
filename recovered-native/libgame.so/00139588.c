/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139588  Symbol: bounceTime */

/* cocos2d::CCEaseBounce::bounceTime(float) */

void __thiscall cocos2d::CCEaseBounce::bounceTime(CCEaseBounce *this,float param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined8 uVar4;
  
  uVar4 = __extendsfdf2(in_r1);
  uVar3 = (undefined4)((ulonglong)uVar4 >> 0x20);
  uVar2 = (undefined4)uVar4;
  iVar1 = __aeabi_dcmplt(uVar2,uVar3,DAT_00139628,DAT_0013962c);
  if (iVar1 == 0) {
    iVar1 = __aeabi_dcmplt(uVar2,uVar3,DAT_00139630,DAT_00139634);
    if (iVar1 == 0) {
      iVar1 = __aeabi_dcmplt(uVar2,uVar3,DAT_00139638,DAT_0013963c);
      if (iVar1 == 0) {
        uVar2 = __subsf3(in_r1,DAT_00139650);
        uVar3 = __mulsf3(uVar2,DAT_00139640);
        uVar3 = __mulsf3(uVar3,uVar2);
        uVar2 = DAT_00139654;
      }
      else {
        uVar2 = __subsf3(in_r1,DAT_00139648);
        uVar3 = __mulsf3(uVar2,DAT_00139640);
        uVar3 = __mulsf3(uVar3,uVar2);
        uVar2 = DAT_0013964c;
      }
    }
    else {
      uVar2 = __subsf3(in_r1,DAT_00139644);
      uVar3 = __mulsf3(uVar2,DAT_00139640);
      uVar3 = __mulsf3(uVar3,uVar2);
      uVar2 = 0x3f400000;
    }
    __addsf3(uVar3,uVar2);
  }
  else {
    uVar2 = __mulsf3(in_r1,DAT_00139640);
    __mulsf3(uVar2,in_r1);
  }
  return;
}


