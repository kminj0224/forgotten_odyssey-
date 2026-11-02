/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d6cc  Symbol: itemForTouch */

/* cocos2d::CCMenu::itemForTouch(cocos2d::CCTouch*) */

int * __thiscall cocos2d::CCMenu::itemForTouch(CCMenu *this,CCTouch *param_1)

{
  int iVar1;
  int *this_00;
  int iVar2;
  CCPoint *pCVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  CCPoint local_40;
  undefined4 local_3c;
  CCPoint local_38;
  undefined4 local_34;
  CCPoint aCStack_30 [2];
  undefined4 local_28;
  undefined4 local_24;
  
  local_38 = *(CCPoint *)(param_1 + 0x18);
  local_34 = *(undefined4 *)(param_1 + 0x1c);
  CCDirector::sharedDirector();
  CCDirector::convertToGL(&local_40);
  this_00 = *(int **)(this + 0x40);
  local_38 = local_40;
  local_34 = local_3c;
  if (((this_00 != (int *)0x0) &&
      (this_00 = (int *)CCArray::count((CCArray *)this_00), iVar1 = DAT_0014d788,
      this_00 != (int *)0x0)) && (this_00 = *(int **)(this + 0x40), this_00 != (int *)0x0)) {
    piVar5 = this_00 + 5;
    this_00 = *(int **)*piVar5;
    if (this_00 != (int *)0x0) {
      piVar5 = ((int **)*piVar5)[2];
      piVar6 = piVar5 + (int)((int)this_00 + -1);
      puVar4 = (undefined4 *)(DAT_0014d788 + 0x14d71a);
      do {
        do {
          if (piVar6 < piVar5) {
            return (int *)0x0;
          }
          iVar2 = *piVar5;
          piVar5 = piVar5 + 1;
          if (iVar2 == 0) {
            return (int *)0x0;
          }
          this_00 = (int *)__dynamic_cast(iVar2,*(undefined4 *)(DAT_0014d78c + 0x14d76e),
                                          *(undefined4 *)(DAT_0014d790 + 0x14d770),0);
        } while (((this_00 == (int *)0x0) ||
                 (iVar2 = (**(code **)(*this_00 + 0x68))(this_00), iVar2 == 0)) ||
                (iVar2 = (**(code **)(*this_00 + 0xec))(this_00), iVar2 == 0));
        pCVar3 = &local_38;
        CCNode::convertToNodeSpace(aCStack_30);
        CCMenuItem::rect();
        local_28 = *puVar4;
        local_24 = *(undefined4 *)(iVar1 + 0x14d71e);
        iVar2 = CCRect::CCRectContainsPoint((CCRect *)&local_28,aCStack_30,pCVar3);
      } while (iVar2 == 0);
    }
  }
  return this_00;
}


