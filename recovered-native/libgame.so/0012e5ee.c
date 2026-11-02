/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012e5ee  Symbol: MM_NULL_Touch */

/* MainMenuLayer::MM_NULL_Touch(cocos2d::CCPoint) */

undefined8 MainMenuLayer::MM_NULL_Touch(CCPoint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 uVar4;
  
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
  puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
  iVar3 = __aeabi_fcmplt(*puVar2,in_r1);
  if (iVar3 == 0) {
LAB_0012e72a:
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
    iVar3 = __aeabi_fcmplt(*puVar2,in_r1);
    if (iVar3 == 0) goto LAB_0012e744;
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
    iVar3 = (**(code **)(*piVar1 + 0x38))();
    iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar3 + 4),in_r2);
    if (iVar3 == 0) goto LAB_0012e744;
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
    uVar4 = *puVar2;
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
    uVar4 = __addsf3(uVar4,*puVar2);
    iVar3 = __aeabi_fcmpgt(uVar4,in_r1);
    if (iVar3 == 0) goto LAB_0012e744;
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
    iVar3 = (**(code **)(*piVar1 + 0x38))();
    uVar4 = *(undefined4 *)(iVar3 + 4);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x14);
    iVar3 = (**(code **)(*piVar1 + 0x7c))();
    uVar4 = __subsf3(uVar4,*(undefined4 *)(iVar3 + 4));
    iVar3 = __aeabi_fcmplt(uVar4,in_r2);
    if (iVar3 == 0) goto LAB_0012e744;
    Option_UI_Call((MainMenuLayer *)param_1);
    uVar4 = 2;
  }
  else {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    iVar3 = (**(code **)(*piVar1 + 0x38))();
    iVar3 = __aeabi_fcmpgt(*(undefined4 *)(iVar3 + 4),in_r2);
    if (iVar3 == 0) goto LAB_0012e72a;
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x38))();
    uVar4 = *puVar2;
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))();
    uVar4 = __addsf3(uVar4,*puVar2);
    iVar3 = __aeabi_fcmpgt(uVar4,in_r1);
    if (iVar3 == 0) goto LAB_0012e72a;
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    iVar3 = (**(code **)(*piVar1 + 0x38))();
    uVar4 = *(undefined4 *)(iVar3 + 4);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    iVar3 = (**(code **)(*piVar1 + 0x7c))();
    uVar4 = __subsf3(uVar4,*(undefined4 *)(iVar3 + 4));
    iVar3 = __aeabi_fcmplt(uVar4,in_r2);
    if (iVar3 == 0) goto LAB_0012e72a;
    Play_UI_Call();
    uVar4 = 1;
  }
  *(undefined4 *)(param_1 + 0x110) = uVar4;
LAB_0012e744:
  return CONCAT44(in_r2,in_r1);
}


