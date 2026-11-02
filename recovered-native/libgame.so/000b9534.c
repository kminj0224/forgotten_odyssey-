/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b9534  Symbol: ani_ani_test_R */

/* ani_ani_test_R(cocos2d::CCSprite*, _KG_Anit*) */

void ani_ani_test_R(CCSprite *param_1,_KG_Anit *param_2)

{
  CCArray *this;
  int iVar1;
  int *this_00;
  CCAction *pCVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  uint local_28;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  (**(code **)(*(int *)param_1 + 0xa8))(param_1);
  if ((this != (CCArray *)0x0) && (iVar1 = cocos2d::CCArray::count(this), iVar1 != 0)) {
    for (local_28 = 0; uVar3 = cocos2d::CCArray::count(this), local_28 < uVar3;
        local_28 = local_28 + 1) {
      this_00 = (int *)cocos2d::CCArray::objectAtIndex(this,local_28);
      if (*(CCActionInterval **)((int)param_2 + 0x140) == (CCActionInterval *)0x0) {
        if ((local_28 != 0) &&
           (iVar1 = (**(code **)(*(int *)param_1 + 0xa0))(param_1), iVar1 != DAT_000b96b8)) {
          (**(code **)(*this_00 + 0x6c))(this_00,0);
        }
      }
      else {
        (**(code **)(*this_00 + 0x6c))(this_00,1);
        iVar7 = *(int *)param_2;
        iVar1 = __aeabi_fcmpeq(*(undefined4 *)(iVar7 + 0x4c),0);
        iVar5 = *this_00;
        if (iVar1 == 0) {
          pcVar6 = *(code **)(iVar5 + 0xec);
          uVar4 = 0;
LAB_000b95c8:
          (*pcVar6)(this_00,uVar4);
        }
        else {
          uVar4 = *(undefined4 *)(iVar7 + 0x60);
          iVar1 = __aeabi_fcmpeq(uVar4,0);
          if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpeq(uVar4,DAT_000b96b0), iVar1 == 0)) {
            uVar4 = 0xff;
            pcVar6 = *(code **)(iVar5 + 0xec);
            goto LAB_000b95c8;
          }
        }
        iVar7 = *(int *)param_2;
        uVar4 = *(undefined4 *)(iVar7 + 0x3c);
        iVar1 = __aeabi_fcmpeq(uVar4,DAT_000b96b4);
        iVar5 = *this_00;
        if (iVar1 == 0) {
          (**(code **)(iVar5 + 0x24))(this_00,uVar4);
          uVar4 = *(undefined4 *)(*(int *)param_2 + 100);
          iVar1 = __aeabi_fcmpeq(uVar4,DAT_000b96b4);
          if (iVar1 == 0) {
            pcVar6 = *(code **)(*this_00 + 0x24);
            goto LAB_000b961a;
          }
        }
        else {
          uVar4 = *(undefined4 *)(iVar7 + 100);
          iVar1 = __aeabi_fcmpeq(uVar4,DAT_000b96b4);
          pcVar6 = *(code **)(iVar5 + 0x24);
          if (iVar1 != 0) {
            uVar4 = 0;
          }
LAB_000b961a:
          (*pcVar6)(this_00,uVar4);
        }
        iVar5 = *(int *)param_2;
        uVar4 = *(undefined4 *)(iVar5 + 0x58);
        iVar1 = __aeabi_fcmpeq(uVar4,DAT_000b96b4);
        if (iVar1 == 0) {
          pcVar6 = *(code **)(*this_00 + 0x2c);
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + 0x18);
          pcVar6 = *(code **)(*this_00 + 0x2c);
        }
        (*pcVar6)(this_00,uVar4);
        iVar5 = *(int *)param_2;
        uVar4 = *(undefined4 *)(iVar5 + 0x5c);
        iVar1 = __aeabi_fcmpeq(uVar4,DAT_000b96b4);
        if (iVar1 == 0) {
          pcVar6 = *(code **)(*this_00 + 0x34);
        }
        else {
          uVar4 = *(undefined4 *)(iVar5 + 0x1c);
          pcVar6 = *(code **)(*this_00 + 0x34);
        }
        (*pcVar6)(this_00,uVar4);
        pCVar2 = (CCAction *)
                 cocos2d::CCRepeatForever::actionWithAction
                           (*(CCActionInterval **)((int)param_2 + 0x140));
        cocos2d::CCNode::runAction((CCNode *)this_00,pCVar2);
      }
      param_2 = (_KG_Anit *)((int)param_2 + 4);
    }
  }
  return;
}


