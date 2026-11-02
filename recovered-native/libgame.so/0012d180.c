/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012d180  Symbol: MM_Slot_Touch */

/* MainMenuLayer::MM_Slot_Touch(cocos2d::CCPoint) */

undefined8 MainMenuLayer::MM_Slot_Touch(CCPoint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 uVar6;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
  uVar6 = *puVar2;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  uVar3 = __mulsf3(*puVar2,0x3f000000);
  uVar3 = __subsf3(uVar6,uVar3);
  iVar4 = __aeabi_fcmplt(uVar3,in_r1);
  if (iVar4 != 0) {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
    iVar4 = (**(code **)(*piVar1 + 0x38))();
    uVar6 = *(undefined4 *)(iVar4 + 4);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
    iVar4 = (**(code **)(*piVar1 + 0x7c))();
    uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
    uVar3 = __addsf3(uVar6,uVar3);
    iVar4 = __aeabi_fcmpgt(uVar3,in_r2);
    if (iVar4 != 0) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
      uVar6 = *puVar2;
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
      uVar3 = __mulsf3(*puVar2,0x3f000000);
      uVar3 = __addsf3(uVar6,uVar3);
      iVar4 = __aeabi_fcmpgt(uVar3,in_r1);
      if (iVar4 != 0) {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
        iVar4 = (**(code **)(*piVar1 + 0x38))();
        uVar6 = *(undefined4 *)(iVar4 + 4);
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
        iVar4 = (**(code **)(*piVar1 + 0x7c))();
        uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
        uVar3 = __subsf3(uVar6,uVar3);
        iVar4 = __aeabi_fcmplt(uVar3,in_r2);
        if (iVar4 != 0) {
          pcVar5 = (char *)(DAT_0012d37c + 0x12d27c);
          goto LAB_0012d32e;
        }
      }
    }
  }
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
  uVar6 = *puVar2;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
  uVar3 = __mulsf3(*puVar2,0x3f000000);
  uVar3 = __subsf3(uVar6,uVar3);
  iVar4 = __aeabi_fcmplt(uVar3,in_r1);
  if (iVar4 != 0) {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
    iVar4 = (**(code **)(*piVar1 + 0x38))();
    uVar6 = *(undefined4 *)(iVar4 + 4);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
    iVar4 = (**(code **)(*piVar1 + 0x7c))();
    uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
    uVar3 = __addsf3(uVar6,uVar3);
    iVar4 = __aeabi_fcmpgt(uVar3,in_r2);
    if (iVar4 != 0) {
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
      uVar6 = *puVar2;
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
      puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
      uVar3 = __mulsf3(*puVar2,0x3f000000);
      uVar3 = __addsf3(uVar6,uVar3);
      iVar4 = __aeabi_fcmpgt(uVar3,in_r1);
      if (iVar4 != 0) {
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
        iVar4 = (**(code **)(*piVar1 + 0x38))();
        uVar6 = *(undefined4 *)(iVar4 + 4);
        piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
        iVar4 = (**(code **)(*piVar1 + 0x7c))();
        uVar3 = __mulsf3(*(undefined4 *)(iVar4 + 4),0x3f000000);
        uVar3 = __subsf3(uVar6,uVar3);
        iVar4 = __aeabi_fcmplt(uVar3,in_r2);
        if (iVar4 != 0) {
          pcVar5 = (char *)(DAT_0012d380 + 0x12d330);
LAB_0012d32e:
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog(pcVar5);
        }
      }
    }
  }
  MM_NULL_CALL();
  *(undefined4 *)(param_1 + 0x110) = 0;
  return CONCAT44(in_r2,in_r1);
}


