/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f254  Symbol: setSelectedIndex */

/* cocos2d::CCMenuItemToggle::setSelectedIndex(unsigned int) */

undefined8 cocos2d::CCMenuItemToggle::setSelectedIndex(uint param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_r1;
  code *pcVar3;
  undefined8 uVar4;
  uint uStack_20;
  int iStack_1c;
  
  uStack_20 = param_1;
  iStack_1c = in_r1;
  if (in_r1 != *(int *)(param_1 + 0x118)) {
    *(int *)(param_1 + 0x118) = in_r1;
    CCNode::removeChildByTag(param_1,SUB41(DAT_0014f2c8,0));
    piVar1 = (int *)CCMutableArray<cocos2d::CCMenuItem*>::getObjectAtIndex
                              (*(CCMutableArray<cocos2d::CCMenuItem*> **)(param_1 + 0x11c),
                               *(uint *)(param_1 + 0x118));
    (**(code **)(*(int *)param_1 + 0xcc))(param_1,piVar1,0,DAT_0014f2c8);
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0x7c))(piVar1);
    (**(code **)(*(int *)param_1 + 0x80))(param_1,puVar2);
    pcVar3 = *(code **)(*piVar1 + 0x3c);
    __mulsf3(*puVar2,0x3f000000);
    uVar4 = __mulsf3(puVar2[1],0x3f000000);
    CCPoint::CCPoint((CCPoint *)&uStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    (*pcVar3)(piVar1,&uStack_20);
  }
  return CONCAT44(iStack_1c,uStack_20);
}


