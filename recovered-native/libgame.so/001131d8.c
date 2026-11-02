/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001131d8  Symbol: KnockBack_Call_Back */

/* KnockBack_Call_Back(float, cocos2d::CCLayer*) */

void KnockBack_Call_Back(float param_1,CCLayer *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this;
  CCSpriteFrame *pCVar4;
  int *in_r1;
  undefined4 *puVar5;
  CCNode *this_00;
  uint *puVar6;
  undefined4 uVar7;
  float extraout_s0;
  undefined8 uVar8;
  float extraout_s1;
  CCPoint local_20;
  int local_1c;
  
  iVar1 = (**(code **)(*in_r1 + 0xa8))(in_r1);
  if (*(char *)(*(int *)(iVar1 + 4) + 0x9c) != '\0') {
    puVar5 = (undefined4 *)(*(int *)(iVar1 + 4) + 0xa0);
    uVar2 = __addsf3(*puVar5,param_2);
    *puVar5 = uVar2;
    iVar3 = cocos2d::CCNode::numberOfRunningActions();
    if (((iVar3 == 0) && ((*(uint **)(iVar1 + 4))[0x19] == 6)) && (**(uint **)(iVar1 + 4) < 2)) {
      this_00 = **(CCNode ***)(DAT_00113314 + 0x113226);
      iVar3 = (**(code **)(*in_r1 + 0xa0))(in_r1);
      iVar3 = cocos2d::CCNode::getChildByTag(this_00,iVar3);
      this = *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(iVar3 + 300);
      pCVar4 = (CCSpriteFrame *)
               cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex
                         (this,(*(int *)(this + 0x18) - *(int *)(this + 0x14) >> 2) - 1);
      cocos2d::CCSprite::setDisplayFrame((CCSprite *)in_r1,pCVar4);
    }
    puVar6 = *(uint **)(iVar1 + 4);
    iVar3 = __aeabi_fcmpge(puVar6[0x28],puVar6[0x29]);
    if (iVar3 == 0) {
      if ((puVar6[0x19] == 7) && (iVar3 = Random(0,10), iVar3 == 0)) {
        (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x118) + 0x38))();
        iVar3 = (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x118) + 0x38))();
        uVar7 = *(undefined4 *)(iVar3 + 4);
        iVar1 = (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x118) + 0x7c))();
        uVar2 = __mulsf3(*(undefined4 *)(iVar1 + 4),0x3f000000);
        uVar8 = __addsf3(uVar7,uVar2);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
        iVar1 = Random(8,10);
        iVar3 = Random(6,10);
        Set_Dust_Particle((CCLayer *)in_r1,local_20,local_1c,iVar1,extraout_s0,extraout_s1,iVar3);
      }
    }
    else {
      if (*puVar6 < 2) {
        if (puVar6[0x19] - 3 < 2) {
          return;
        }
      }
      else {
        if (1 < *puVar6 - 2) {
          return;
        }
        if (puVar6[0x19] == 7) {
          return;
        }
      }
      KnockBackInit((CCLayer *)in_r1);
    }
  }
  return;
}


