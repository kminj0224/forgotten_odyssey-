/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cccd8  Symbol: SS_Touch */

/* StageSelect::SS_Touch(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCSize) */

bool StageSelect::SS_Touch(CCPoint param_1,CCPoint param_2,CCSize param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  undefined8 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar1 = __addsf3(in_r3,DAT_000ccd88);
  __addsf3(uVar1,0x41800000);
  uVar4 = __subsf3(DAT_000ccd8c,in_stack_00000000);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar1 = __mulsf3(in_stack_00000004,0x3f000000);
  uVar2 = __subsf3(local_28,uVar1);
  iVar3 = __aeabi_fcmplt(uVar2,param_2);
  if (iVar3 != 0) {
    uVar1 = __addsf3(local_28,uVar1);
    iVar3 = __aeabi_fcmpgt(uVar1,param_2);
    if (iVar3 != 0) {
      uVar1 = __mulsf3(in_stack_00000008,0x3f000000);
      uVar2 = __subsf3(local_24,uVar1);
      iVar3 = __aeabi_fcmplt(uVar2,param_3);
      if (iVar3 != 0) {
        uVar1 = __addsf3(local_24,uVar1);
        iVar3 = __aeabi_fcmpgt(uVar1,param_3);
        return iVar3 != 0;
      }
    }
  }
  return false;
}


