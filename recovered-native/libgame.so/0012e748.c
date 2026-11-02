/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012e748  Symbol: MM_Option_Touch */

/* MainMenuLayer::MM_Option_Touch(cocos2d::CCPoint) */

void MainMenuLayer::MM_Option_Touch(CCPoint param_1)

{
  int *piVar1;
  CCNode *pCVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 in_r1;
  undefined4 in_r2;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,1);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,2);
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
  iVar7 = __aeabi_fcmplt(*puVar6,in_r1);
  if (iVar7 != 0) {
    piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    iVar7 = (**(code **)(*piVar5 + 0x38))();
    iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 4),in_r2);
    if (iVar7 != 0) {
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
      uVar8 = *puVar6;
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))();
      uVar8 = __addsf3(uVar8,*puVar6);
      iVar7 = __aeabi_fcmpgt(uVar8,in_r1);
      if (iVar7 != 0) {
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
        iVar7 = (**(code **)(*piVar5 + 0x38))();
        uVar8 = *(undefined4 *)(iVar7 + 4);
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
        iVar7 = (**(code **)(*piVar5 + 0x7c))();
        uVar8 = __subsf3(uVar8,*(undefined4 *)(iVar7 + 4));
        iVar7 = __aeabi_fcmplt(uVar8,in_r2);
        if (iVar7 != 0) {
          MM_NULL_CALL();
          uVar8 = 1;
          goto LAB_0012ebdc;
        }
      }
    }
  }
  piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
  puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
  iVar7 = __aeabi_fcmplt(*puVar6,in_r1);
  if (iVar7 != 0) {
    piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
    iVar7 = (**(code **)(*piVar5 + 0x38))();
    iVar7 = __aeabi_fcmpgt(*(undefined4 *)(iVar7 + 4),in_r2);
    if (iVar7 != 0) {
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x38))();
      uVar8 = *puVar6;
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))();
      uVar8 = __addsf3(uVar8,*puVar6);
      iVar7 = __aeabi_fcmpgt(uVar8,in_r1);
      if (iVar7 != 0) {
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
        iVar7 = (**(code **)(*piVar5 + 0x38))();
        uVar8 = *(undefined4 *)(iVar7 + 4);
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
        iVar7 = (**(code **)(*piVar5 + 0x7c))();
        uVar8 = __subsf3(uVar8,*(undefined4 *)(iVar7 + 4));
        iVar7 = __aeabi_fcmplt(uVar8,in_r2);
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_0012ead0 + 0x12e8c6));
        }
      }
    }
  }
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
  uVar8 = *puVar6;
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar9 = __mulsf3(*puVar6,0x3f000000);
  uVar8 = __subsf3(uVar8,uVar9);
  puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
  uVar8 = __addsf3(uVar8,*puVar6);
  puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar9 = __mulsf3(*puVar6,0x3f000000);
  uVar8 = __subsf3(uVar8,uVar9);
  uVar8 = __subsf3(uVar8,DAT_0012ebe4);
  iVar7 = __aeabi_fcmplt(uVar8,in_r1);
  if (iVar7 != 0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    uVar8 = *puVar6;
    puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar9 = __mulsf3(*puVar6,0x3f000000);
    uVar8 = __subsf3(uVar8,uVar9);
    puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x38))(piVar3);
    uVar8 = __addsf3(uVar8,*puVar6);
    puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
    uVar9 = __mulsf3(*puVar6,0x3f000000);
    uVar8 = __addsf3(uVar8,uVar9);
    uVar8 = __subsf3(uVar8,DAT_0012ead4);
    iVar7 = __aeabi_fcmpgt(uVar8,in_r1);
    if (iVar7 != 0) {
      iVar7 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar8 = *(undefined4 *)(iVar7 + 4);
      iVar7 = (**(code **)(*piVar3 + 0x7c))(piVar3);
      uVar9 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
      uVar8 = __subsf3(uVar8,uVar9);
      iVar7 = __aeabi_fcmplt(uVar8,in_r2);
      if (iVar7 != 0) {
        iVar7 = (**(code **)(*piVar1 + 0x38))(piVar1);
        uVar8 = *(undefined4 *)(iVar7 + 4);
        iVar7 = (**(code **)(*piVar3 + 0x7c))(piVar3);
        uVar9 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
        uVar8 = __addsf3(uVar8,uVar9);
        iVar7 = __aeabi_fcmpgt(uVar8,in_r2);
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_0012ead8 + 0x12e99c));
        }
      }
    }
  }
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
  uVar9 = *puVar6;
  puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
  uVar8 = __mulsf3(*puVar6,0x3f000000);
  uVar8 = __subsf3(uVar9,uVar8);
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
  uVar8 = __addsf3(uVar8,*puVar6);
  puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
  uVar9 = __mulsf3(*puVar6,0x3f000000);
  uVar8 = __subsf3(uVar8,uVar9);
  uVar8 = __addsf3(uVar8,DAT_0012ebe4);
  iVar7 = __aeabi_fcmplt(uVar8,in_r1);
  if (iVar7 != 0) {
    puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
    uVar9 = *puVar6;
    puVar6 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    uVar8 = __mulsf3(*puVar6,0x3f000000);
    uVar8 = __subsf3(uVar9,uVar8);
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x38))(piVar4);
    uVar8 = __addsf3(uVar8,*puVar6);
    puVar6 = (undefined4 *)(**(code **)(*piVar4 + 0x7c))(piVar4);
    uVar9 = __mulsf3(*puVar6,0x3f000000);
    uVar8 = __addsf3(uVar8,uVar9);
    uVar8 = __addsf3(uVar8,DAT_0012ead4);
    iVar7 = __aeabi_fcmpgt(uVar8,in_r1);
    if (iVar7 != 0) {
      iVar7 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar9 = *(undefined4 *)(iVar7 + 4);
      iVar7 = (**(code **)(*piVar4 + 0x7c))(piVar4);
      uVar8 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
      uVar8 = __subsf3(uVar9,uVar8);
      iVar7 = __aeabi_fcmplt(uVar8,in_r2);
      if (iVar7 != 0) {
        iVar7 = (**(code **)(*piVar1 + 0x38))(piVar1);
        uVar9 = *(undefined4 *)(iVar7 + 4);
        iVar7 = (**(code **)(*piVar4 + 0x7c))(piVar4);
        uVar8 = __mulsf3(*(undefined4 *)(iVar7 + 4),0x3f000000);
        uVar8 = __addsf3(uVar9,uVar8);
        iVar7 = __aeabi_fcmpgt(uVar8,in_r2);
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          cocos2d::CCLog((char *)(DAT_0012eae4 + 0x12ea9e));
        }
      }
    }
  }
  MM_NULL_CALL();
  uVar8 = 0;
LAB_0012ebdc:
  *(undefined4 *)(param_1 + 0x110) = uVar8;
  return;
}


