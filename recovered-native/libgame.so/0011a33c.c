/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011a33c  Symbol: KG_Notice_Touch */

/* KG_Notice_Touch(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCSize) */

bool KG_Notice_Touch(CCPoint param_1,CCPoint param_2,CCSize param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_r3;
  undefined8 uVar4;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 local_20;
  undefined4 local_1c;
  
  __addsf3(param_3,DAT_0011a3dc);
  uVar4 = __addsf3(in_r3,DAT_0011a3e0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar1 = __mulsf3(in_stack_00000000,0x3f000000);
  uVar2 = __subsf3(local_20,uVar1);
  iVar3 = __aeabi_fcmplt(uVar2,param_1);
  if (iVar3 != 0) {
    uVar1 = __addsf3(local_20,uVar1);
    iVar3 = __aeabi_fcmpgt(uVar1,param_1);
    if (iVar3 != 0) {
      uVar1 = __mulsf3(in_stack_00000004,0x3f000000);
      uVar2 = __subsf3(local_1c,uVar1);
      iVar3 = __aeabi_fcmplt(uVar2,param_2);
      if (iVar3 != 0) {
        uVar1 = __addsf3(local_1c,uVar1);
        iVar3 = __aeabi_fcmpgt(uVar1,param_2);
        return iVar3 != 0;
      }
    }
  }
  return false;
}


