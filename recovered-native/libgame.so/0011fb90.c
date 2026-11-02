/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011fb90  Symbol: ccTouchesEnded */

/* Tutorial_Layer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Tutorial_Layer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  int iVar4;
  CCLayer *pCVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  Effect *pEVar9;
  undefined4 *puVar10;
  int iVar11;
  int **ppiVar12;
  undefined8 uVar13;
  CCPoint local_20 [3];
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar7 = *(undefined4 *)(iVar1 + 0x18);
  uVar8 = *(undefined4 *)(iVar1 + 0x1c);
  iVar1 = DAT_0011feac + 0x11fbaa;
  puVar10 = *(undefined4 **)(iVar1 + DAT_0011feb4);
  uVar2 = __divsf3(*puVar10,DAT_0011feb0);
  __divsf3(uVar7,uVar2);
  uVar2 = __divsf3(puVar10[1],DAT_0011feb8);
  uVar13 = __divsf3(uVar8,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  iVar11 = *(int *)(param_1 + 0x110);
  if (*(int *)(param_1 + 0x114) - 5U < 2) {
    if (iVar11 == 1) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar4 = Sprite_Touch2(pCVar3,local_20[0]);
      iVar11 = DAT_0011fec0;
      if (iVar4 == 0) {
        return;
      }
      **(undefined4 **)(iVar1 + DAT_0011febc) = 1;
      **(undefined4 **)(iVar1 + DAT_0011fec4) = 3;
      **(undefined4 **)(iVar1 + DAT_0011fec8) = 2;
      *(undefined4 *)
       (**(int **)(iVar1 + DAT_0011fecc) + (**(int **)(iVar1 + DAT_0011fed0) + iVar11) * 4 + 4) = 2;
      return;
    }
    if (iVar11 == 3) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar11 == 0) {
        return;
      }
      **(undefined4 **)(iVar1 + DAT_0011fed4) = 0xb;
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      iVar1 = **(int **)(iVar1 + DAT_0011fecc) +
              (**(int **)(iVar1 + DAT_0011fed0) + DAT_0011fec0) * 4;
      uVar2 = 4;
    }
    else if (iVar11 == 4) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar11 == 0) {
        return;
      }
      **(undefined4 **)(iVar1 + DAT_0011fed4) = 0xb;
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      iVar1 = **(int **)(iVar1 + DAT_0011fecc) +
              (**(int **)(iVar1 + DAT_0011fed0) + DAT_0011fec0) * 4;
      uVar2 = 5;
    }
    else if (iVar11 == 5) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar11 == 0) {
        return;
      }
      **(undefined4 **)(iVar1 + DAT_0011fed4) = 0xb;
      ppiVar12 = *(int ***)(iVar1 + DAT_0011fed8);
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,1);
      ani_attack_1_2_ani(pCVar5);
      pEVar9 = *(Effect **)(**(int **)(iVar1 + DAT_0011fedc) + DAT_0011fee0);
      pCVar5 = **(CCLayer ***)(iVar1 + DAT_0011fee4);
      puVar10 = (undefined4 *)(**(code **)(**ppiVar12 + 0x38))();
      __addsf3(*puVar10,DAT_0011fee8);
      iVar11 = __fixsfsi();
      iVar4 = (**(code **)(**ppiVar12 + 0x38))();
      iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
      iVar6 = (**(code **)(**ppiVar12 + 0x14))();
      Effect::Hero_Effect(pEVar9,pCVar5,1,iVar11,iVar4,iVar6,1,false);
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      iVar1 = **(int **)(iVar1 + DAT_0011fecc) +
              (**(int **)(iVar1 + DAT_0011fed0) + DAT_0011fec0) * 4;
      uVar2 = 6;
    }
    else if (iVar11 - 6U < 2) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar11 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x110) == 6) {
        ppiVar12 = *(int ***)(iVar1 + DAT_0011fed8);
        pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,1);
        ani_attack_ani(pCVar5);
        pEVar9 = *(Effect **)(**(int **)(iVar1 + DAT_0011fedc) + DAT_0011fee0);
        pCVar5 = **(CCLayer ***)(iVar1 + DAT_0011fee4);
        puVar10 = (undefined4 *)(**(code **)(**ppiVar12 + 0x38))();
        __addsf3(*puVar10,DAT_0011fee8);
        iVar11 = __fixsfsi();
        iVar4 = (**(code **)(**ppiVar12 + 0x38))();
        iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
        iVar6 = (**(code **)(**ppiVar12 + 0x14))();
        Effect::Hero_Effect(pEVar9,pCVar5,1,iVar11,iVar4,iVar6,0,false);
        *(undefined4 *)
         (**(int **)(iVar1 + DAT_0011fecc) + (**(int **)(iVar1 + DAT_0011fed0) + DAT_0011fec0) * 4 +
         4) = 7;
        *(undefined4 *)(param_1 + 0x110) = 7;
        return;
      }
      if (*(int *)(param_1 + 0x110) != 7) {
        return;
      }
      **(undefined4 **)(iVar1 + DAT_0011fed4) = 0xb;
      ppiVar12 = *(int ***)(iVar1 + DAT_0011fed8);
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,1);
      ani_attack_2_ani(pCVar5);
      pEVar9 = *(Effect **)(**(int **)(iVar1 + DAT_0011fedc) + DAT_0011fee0);
      pCVar5 = **(CCLayer ***)(iVar1 + DAT_0011fee4);
      puVar10 = (undefined4 *)(**(code **)(**ppiVar12 + 0x38))();
      __addsf3(*puVar10,DAT_0011fee8);
      iVar11 = __fixsfsi();
      iVar4 = (**(code **)(**ppiVar12 + 0x38))();
      iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
      iVar6 = (**(code **)(**ppiVar12 + 0x14))();
      Effect::Hero_Effect(pEVar9,pCVar5,1,iVar11,iVar4,iVar6,2,false);
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      iVar1 = **(int **)(iVar1 + DAT_0011fecc) +
              (**(int **)(iVar1 + DAT_0011fed0) + DAT_0011fec0) * 4;
      uVar2 = 8;
    }
    else if (iVar11 == 8) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar11 == 0) {
        return;
      }
      **(undefined4 **)(iVar1 + DAT_00120248) = 0xb;
      ppiVar12 = *(int ***)(iVar1 + DAT_0012024c);
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,1);
      ani_attack_2_2_ani(pCVar5);
      pEVar9 = *(Effect **)(**(int **)(iVar1 + DAT_00120250) + DAT_00120254);
      pCVar5 = **(CCLayer ***)(iVar1 + DAT_00120258);
      puVar10 = (undefined4 *)(**(code **)(**ppiVar12 + 0x38))();
      __addsf3(*puVar10,DAT_0012025c);
      iVar11 = __fixsfsi();
      iVar4 = (**(code **)(**ppiVar12 + 0x38))();
      iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
      iVar6 = (**(code **)(**ppiVar12 + 0x14))();
      Effect::Hero_Effect(pEVar9,pCVar5,1,iVar11,iVar4,iVar6,1,false);
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      iVar1 = **(int **)(iVar1 + DAT_00120260) +
              (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
      uVar2 = 9;
    }
    else {
      if (iVar11 != 10) {
        if (iVar11 == 0xc) {
          pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
          iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
          if (iVar11 == 0) {
            return;
          }
          (**(code **)(*(int *)param_1 + 0xd4))(param_1,1);
          iVar11 = **(int **)(iVar1 + DAT_00120260) +
                   (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
          uVar2 = 0xd;
        }
        else {
          if (iVar11 == 0xd) {
            pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
            iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
            if (iVar11 == 0) {
              return;
            }
            cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
            iVar11 = **(int **)(iVar1 + DAT_00120260) +
                     (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
            uVar2 = 0xe;
LAB_001201be:
            *(undefined4 *)(iVar11 + 4) = uVar2;
            **(undefined **)(iVar1 + DAT_0012026c) = 0;
            return;
          }
          if (iVar11 == 0xf) {
            pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
            iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
            if (iVar11 == 0) {
              return;
            }
            cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
            iVar11 = **(int **)(iVar1 + DAT_00120260) +
                     (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
            uVar2 = 0x10;
            goto LAB_001201be;
          }
          if (iVar11 == 0x10) {
            pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
            iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
            if (iVar11 == 0) {
              return;
            }
            cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
            iVar11 = **(int **)(iVar1 + DAT_00120260) +
                     (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
            uVar2 = 0x11;
            goto LAB_001201be;
          }
          if (iVar11 == 0x11) {
            pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
            iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
            if (iVar11 == 0) {
              return;
            }
            cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
            iVar11 = **(int **)(iVar1 + DAT_00120260) +
                     (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
            uVar2 = 0x12;
            goto LAB_001201be;
          }
          if (iVar11 != 0x12) {
            if (iVar11 == 0x13) {
              pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
              iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
              if (iVar11 == 0) {
                return;
              }
              cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
              iVar11 = **(int **)(iVar1 + DAT_00120260) +
                       (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
              uVar2 = 0x14;
            }
            else {
              if (iVar11 != 0x15) {
                return;
              }
              pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
              iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
              if (iVar11 == 0) {
                return;
              }
              cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
              iVar11 = **(int **)(iVar1 + DAT_00120260) +
                       (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
              uVar2 = 0x16;
            }
            goto LAB_001201be;
          }
          pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
          iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
          if (iVar11 == 0) {
            return;
          }
          (**(code **)(*(int *)param_1 + 0xd4))(param_1,1);
          iVar11 = **(int **)(iVar1 + DAT_00120260) +
                   (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
          uVar2 = 0x13;
        }
        *(undefined4 *)(iVar11 + 4) = uVar2;
        **(undefined **)(iVar1 + DAT_0012026c) = 0;
        goto LAB_001202c0;
      }
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0);
      iVar11 = Sprite_Touch2(pCVar3,local_20[0]);
      if (iVar11 == 0) {
        return;
      }
      GameScene::Lode_EndSroty();
      cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
      iVar1 = **(int **)(iVar1 + DAT_00120260) +
              (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
      uVar2 = 0xb;
    }
  }
  else if (iVar11 == 2) {
    **(undefined4 **)(iVar1 + DAT_00120248) = 1;
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
    iVar1 = **(int **)(iVar1 + DAT_00120260) + (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4
    ;
    uVar2 = 3;
  }
  else {
    if (iVar11 != 9) {
      if (iVar11 == 0xb) {
        (**(code **)(*(int *)param_1 + 0xd4))(param_1,1);
        iVar1 = **(int **)(iVar1 + DAT_00120260) +
                (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4;
        uVar2 = 0xc;
      }
      else if (iVar11 == 0xe) {
        (**(code **)(*(int *)param_1 + 0xd4))(param_1,1);
        iVar1 = **(int **)(iVar1 + DAT_001202cc) +
                (**(int **)(iVar1 + DAT_001202d4) + DAT_001202d0) * 4;
        uVar2 = 0xf;
      }
      else {
        if (iVar11 != 0x14) {
          return;
        }
        (**(code **)(*(int *)param_1 + 0xd4))(param_1,1);
        iVar1 = **(int **)(iVar1 + DAT_001202cc) +
                (**(int **)(iVar1 + DAT_001202d4) + DAT_001202d0) * 4;
        uVar2 = 0x15;
      }
      *(undefined4 *)(iVar1 + 4) = uVar2;
LAB_001202c0:
      Re_Lode();
      return;
    }
    **(undefined4 **)(iVar1 + DAT_00120248) = 0xb;
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
    iVar1 = **(int **)(iVar1 + DAT_00120260) + (**(int **)(iVar1 + DAT_00120268) + DAT_00120264) * 4
    ;
    uVar2 = 10;
  }
  *(undefined4 *)(iVar1 + 4) = uVar2;
  return;
}


