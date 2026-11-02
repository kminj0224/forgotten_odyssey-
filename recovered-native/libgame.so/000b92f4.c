/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b92f4  Symbol: ani_ani_Effect */

/* ani_ani_Effect(cocos2d::CCSprite*, _KG_Anit*) */

void ani_ani_Effect(CCSprite *param_1,_KG_Anit *param_2)

{
  CCArray *this;
  int iVar1;
  int *this_00;
  CCObject *this_01;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_2c;
  
  this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))();
  if ((this != (CCArray *)0x0) && (iVar1 = cocos2d::CCArray::count(this), iVar1 != 0)) {
    for (local_2c = 0; uVar2 = cocos2d::CCArray::count(this), local_2c < uVar2;
        local_2c = local_2c + 1) {
      this_00 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,local_2c);
      if (this_00 != (int *)0x0) {
        iVar1 = cocos2d::CCNode::numberOfRunningActions();
        if (iVar1 != 0) {
          cocos2d::CCNode::stopAllActions();
        }
        if (*(int *)((int)param_2 + 0x140) == 0) {
          if (local_2c != 0) {
            (**(code **)(*this_00 + 0x6c))(this_00);
          }
        }
        else {
          iVar1 = cocos2d::CCNode::numberOfRunningActions();
          if (iVar1 == 0) {
            (**(code **)(*this_00 + 0x6c))(this_00,1);
            iVar6 = *(int *)param_2;
            iVar1 = __aeabi_fcmpeq(*(undefined4 *)(iVar6 + 0x4c),0);
            iVar3 = *this_00;
            if (iVar1 == 0) {
              pcVar4 = *(code **)(iVar3 + 0xec);
              uVar5 = 0;
LAB_000b93a0:
              (*pcVar4)(this_00,uVar5);
            }
            else {
              uVar5 = *(undefined4 *)(iVar6 + 0x60);
              iVar1 = __aeabi_fcmpeq(uVar5,0);
              if ((iVar1 == 0) && (iVar1 = __aeabi_fcmpeq(uVar5,DAT_000b9474), iVar1 == 0)) {
                uVar5 = 0xff;
                pcVar4 = *(code **)(iVar3 + 0xec);
                goto LAB_000b93a0;
              }
            }
            iVar3 = *(int *)param_2;
            uVar5 = *(undefined4 *)(iVar3 + 0x3c);
            iVar1 = __aeabi_fcmpeq(uVar5,DAT_000b9478);
            iVar6 = *this_00;
            if (iVar1 == 0) {
              (**(code **)(iVar6 + 0x24))(this_00,uVar5);
              uVar5 = *(undefined4 *)(*(int *)param_2 + 100);
              iVar1 = __aeabi_fcmpeq(uVar5,DAT_000b9478);
              if (iVar1 == 0) {
                pcVar4 = *(code **)(*this_00 + 0x24);
                goto LAB_000b93ec;
              }
            }
            else {
              uVar5 = *(undefined4 *)(iVar3 + 100);
              iVar1 = __aeabi_fcmpeq(uVar5,DAT_000b9478);
              pcVar4 = *(code **)(iVar6 + 0x24);
              if (iVar1 != 0) {
                uVar5 = 0;
              }
LAB_000b93ec:
              (*pcVar4)(this_00,uVar5);
            }
            iVar3 = *(int *)param_2;
            uVar5 = *(undefined4 *)(iVar3 + 0x58);
            iVar1 = __aeabi_fcmpeq(uVar5,DAT_000b9478);
            if (iVar1 == 0) {
              pcVar4 = *(code **)(*this_00 + 0x2c);
            }
            else {
              uVar5 = *(undefined4 *)(iVar3 + 0x18);
              pcVar4 = *(code **)(*this_00 + 0x2c);
            }
            (*pcVar4)(this_00,uVar5);
            iVar3 = *(int *)param_2;
            uVar5 = *(undefined4 *)(iVar3 + 0x5c);
            iVar1 = __aeabi_fcmpeq(uVar5,DAT_000b9478);
            if (iVar1 == 0) {
              pcVar4 = *(code **)(*this_00 + 0x34);
            }
            else {
              uVar5 = *(undefined4 *)(iVar3 + 0x1c);
              pcVar4 = *(code **)(*this_00 + 0x34);
            }
            (*pcVar4)(this_00,uVar5);
            this_01 = (CCObject *)cocos2d::CCObject::copy();
            cocos2d::CCNode::runAction((CCNode *)this_00,(CCAction *)this_01);
            cocos2d::CCObject::release(this_01);
          }
        }
      }
      param_2 = (_KG_Anit *)((int)param_2 + 4);
    }
  }
  return;
}


