/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00130d38  Symbol: update */

/* Story_Layer::update(float) */

void __thiscall Story_Layer::update(Story_Layer *this,float param_1)

{
  int *piVar1;
  CCArray *this_00;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_r1;
  undefined4 uVar5;
  int iVar6;
  float extraout_s0;
  uint local_24;
  
  iVar6 = DAT_00130f10 + 0x130d44;
  if (**(int **)(iVar6 + DAT_00130f14) == 9) {
    return;
  }
  if (*(int *)(this + 0x148) == 2) {
    *(undefined4 *)(this + 0x14c) = DAT_00130f18;
    param_1 = (float)Lode_Naxt_Icon(this);
    uVar5 = 0;
  }
  else {
    if (*(int *)(this + 0x148) != 3) goto LAB_00130d7c;
    cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    iVar4 = cocos2d::CCNode::numberOfRunningActions();
    param_1 = extraout_s0;
    if (iVar4 != 0) goto LAB_00130d7c;
    uVar5 = 1;
  }
  *(undefined4 *)(this + 0x148) = uVar5;
LAB_00130d7c:
  uVar5 = __addsf3(param_1,*(undefined4 *)(this + 0x14c),in_r1);
  *(undefined4 *)(this + 0x14c) = uVar5;
  piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
  if (piVar1 != (int *)0x0) {
    this_00 = (CCArray *)(**(code **)(*piVar1 + 0x58))();
    local_24 = 0;
    if (this_00 != (CCArray *)0x0) {
      for (; uVar3 = cocos2d::CCArray::count(this_00), local_24 < uVar3; local_24 = local_24 + 1) {
        piVar1 = (int *)cocos2d::CCArray::objectAtIndex(this_00,local_24);
        (**(code **)(*piVar1 + 0xa0))();
        uVar5 = __floatsisf();
        uVar2 = __mulsf3(*(undefined4 *)(this + 0x14c),DAT_00130f1c);
        iVar4 = __aeabi_fcmplt(uVar5,uVar2);
        if (iVar4 != 0) {
          (**(code **)(*piVar1 + 0x6c))(piVar1,1);
          iVar4 = cocos2d::CCArray::count(this_00);
          if ((local_24 == iVar4 - 1U) && (*(int *)(this + 0x148) == 1)) {
            Lode_Naxt_Icon(this);
            *(undefined4 *)(this + 0x148) = 0;
          }
        }
      }
    }
  }
  iVar4 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
  if ((iVar4 != 0) && (this[0x144] != (Story_Layer)0x0)) {
    iVar4 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x14c),0x3f800000);
    if (iVar4 != 0) {
      vTransScript(false);
      Lode_BackGround(this);
      Lode_Name(this);
      Lode_Character(this);
      LodeSound();
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00130f24 + 0x130e60),*(int *)(iVar6 + DAT_00130f20) + DAT_00130f28
                    );
    }
    cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    iVar4 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar4 == 0) {
      Lode_Name(this);
      Lode_Character(this);
      LodeSound();
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_00130f2c + 0x130eb4),*(int *)(iVar6 + DAT_00130f20) + DAT_00130f28
                    );
    }
  }
  return;
}


