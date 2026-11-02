/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011a090  Symbol: KG_Touch */

/* KG_Touch(cocos2d::CCPoint, cocos2d::CCPoint, cocos2d::CCSize) */

bool KG_Touch(CCPoint param_1,CCPoint param_2,CCSize param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int in_r3;
  int iVar4;
  undefined8 uVar5;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  CCSize local_60;
  int local_5c;
  CCSize local_58;
  int local_54;
  CCSize local_50;
  int local_4c;
  CCSize local_48;
  int local_44;
  CCSize local_40;
  int local_3c;
  CCSize local_38;
  int local_34;
  CCSize local_30;
  int local_2c;
  CCSize local_28;
  int local_24;
  CCSize local_20;
  int local_1c;
  
  iVar3 = **(int **)(DAT_0011a2f0 + 0x11a0b2);
  if (iVar3 == 0xb) {
    __subsf3(param_3,DAT_0011a2f4);
    uVar5 = __subsf3(in_r3 + -0x80000000,DAT_0011a2f8);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    local_30 = local_60;
    in_r3 = local_5c;
  }
  else if (iVar3 == 0x10) {
    iVar3 = __aeabi_fcmplt(param_2,DAT_0011a2fc);
    if (iVar3 == 0) {
      uVar1 = __addsf3(param_3,DAT_0011a300);
      __addsf3(uVar1,DAT_0011a304);
      uVar5 = __subsf3(DAT_0011a308,in_r3);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_50,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
      ;
      local_30 = local_50;
      in_r3 = local_4c;
    }
    else {
      __subsf3(param_3,DAT_0011a2f4);
      uVar5 = __subsf3(in_r3 + -0x80000000,DAT_0011a2f8);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_58,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
      ;
      local_30 = local_58;
      in_r3 = local_54;
    }
  }
  else if (iVar3 == 0x16) {
    __addsf3(param_3,DAT_0011a30c);
    uVar5 = __addsf3(in_r3,DAT_0011a310);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    local_30 = local_48;
    in_r3 = local_44;
  }
  else if (iVar3 == 0x12) {
    __addsf3(param_3,DAT_0011a314);
    uVar5 = __subsf3(DAT_0011a318,in_r3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    local_30 = local_40;
    in_r3 = local_3c;
  }
  else {
    iVar4 = **(int **)(DAT_0011a31c + 0x11a18e);
    if (iVar4 - 1U < 4) {
      uVar1 = __addsf3(param_3,DAT_0011a320);
      __addsf3(uVar1,0x41800000);
      uVar1 = __subsf3(DAT_0011a318,in_r3);
      uVar5 = __addsf3(uVar1,DAT_0011a324);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
      ;
      local_30 = local_38;
      in_r3 = local_34;
    }
    else if ((((iVar3 - 0x13U < 2) || (iVar4 == 5)) || (iVar4 == 6)) ||
            ((iVar4 == 10 || (iVar4 == 9)))) {
      __addsf3(param_3,DAT_0011a328);
      uVar5 = __addsf3(in_r3,DAT_0011a32c);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
      ;
      in_r3 = local_2c;
    }
    else if (((iVar4 == 0xb) || (iVar4 == 7)) ||
            ((iVar4 == 8 || ((iVar3 == 0x18 || (iVar3 == 0x19)))))) {
      uVar1 = __addsf3(param_3,DAT_0011a320);
      __subsf3(uVar1,DAT_0011a330);
      uVar1 = __subsf3(DAT_0011a318,in_r3);
      uVar5 = __subsf3(uVar1,DAT_0011a2f8);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
      ;
      local_30 = local_28;
      in_r3 = local_24;
    }
    else if (((iVar4 - 0xcU < 2) || (iVar4 == 0xf)) || (local_30 = param_3, iVar4 == 0x10)) {
      uVar1 = __addsf3(param_3,DAT_0011a300);
      __addsf3(uVar1,DAT_0011a334);
      uVar1 = __subsf3(DAT_0011a334,in_r3);
      uVar5 = __addsf3(uVar1,DAT_0011a338);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20))
      ;
      local_30 = local_20;
      in_r3 = local_1c;
    }
  }
  uVar1 = __mulsf3(in_stack_00000000,0x3f000000);
  uVar2 = __subsf3(local_30,uVar1);
  iVar3 = __aeabi_fcmplt(uVar2,param_1);
  if (iVar3 != 0) {
    uVar1 = __addsf3(local_30,uVar1);
    iVar3 = __aeabi_fcmpgt(uVar1,param_1);
    if (iVar3 != 0) {
      uVar1 = __mulsf3(in_stack_00000004,0x3f000000);
      uVar2 = __subsf3(in_r3,uVar1);
      iVar3 = __aeabi_fcmplt(uVar2,param_2);
      if (iVar3 != 0) {
        uVar1 = __addsf3(in_r3,uVar1);
        iVar3 = __aeabi_fcmpgt(uVar1,param_2);
        return iVar3 != 0;
      }
    }
  }
  return false;
}


