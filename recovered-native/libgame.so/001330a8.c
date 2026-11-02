/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001330a8  Symbol: update */

/* Ending_Layer::update(float) */

void __thiscall Ending_Layer::update(Ending_Layer *this,float param_1)

{
  undefined4 uVar1;
  int *piVar2;
  CCArray *this_00;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 in_r1;
  int iVar6;
  uint local_24;
  
  iVar6 = DAT_00133268 + 0x1330b4;
  if (**(int **)(iVar6 + DAT_0013326c) != 9) {
    if (*(int *)(this + 0x148) == 2) {
      *(undefined4 *)(this + 0x14c) = DAT_00133270;
      param_1 = (float)Lode_Naxt_Icon(this);
      *(undefined4 *)(this + 0x148) = 0;
    }
    uVar1 = __addsf3(param_1,*(undefined4 *)(this + 0x14c),in_r1);
    *(undefined4 *)(this + 0x14c) = uVar1;
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,8);
    if (piVar2 != (int *)0x0) {
      this_00 = (CCArray *)(**(code **)(*piVar2 + 0x58))();
      local_24 = 0;
      if (this_00 != (CCArray *)0x0) {
        for (; uVar4 = cocos2d::CCArray::count(this_00), local_24 < uVar4; local_24 = local_24 + 1)
        {
          piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this_00,local_24);
          (**(code **)(*piVar2 + 0xa0))();
          uVar1 = __floatsisf();
          uVar3 = __mulsf3(*(undefined4 *)(this + 0x14c),DAT_00133274);
          iVar5 = __aeabi_fcmplt(uVar1,uVar3);
          if (iVar5 != 0) {
            (**(code **)(*piVar2 + 0x6c))(piVar2,1);
            iVar5 = cocos2d::CCArray::count(this_00);
            if ((local_24 == iVar5 - 1U) && (*(int *)(this + 0x148) == 1)) {
              Lode_Naxt_Icon(this);
              *(undefined4 *)(this + 0x148) = 0;
            }
          }
        }
      }
    }
    iVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
    if ((iVar5 != 0) && (this[0x144] != (Ending_Layer)0x0)) {
      iVar5 = __aeabi_fcmpgt(*(undefined4 *)(this + 0x14c),0x3f800000);
      if (iVar5 != 0) {
        vTransScript(false);
        Lode_BackGround(this);
        Lode_Name(this);
        Lode_Character(this);
        LodeSound();
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_0013327c + 0x1331ba),
                       *(int *)(iVar6 + DAT_00133278) + DAT_00133280);
      }
      cocos2d::CCNode::getChildByTag((CCNode *)this,0xb);
      iVar5 = cocos2d::CCNode::numberOfRunningActions();
      if (iVar5 == 0) {
        Lode_Name(this);
        Lode_Character(this);
        LodeSound();
                    /* WARNING: Subroutine does not return */
        cocos2d::CCLog((char *)(DAT_00133284 + 0x13320e),
                       *(int *)(iVar6 + DAT_00133278) + DAT_00133280);
      }
    }
  }
  return;
}


