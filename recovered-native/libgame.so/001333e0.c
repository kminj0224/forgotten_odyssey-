/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001333e0  Symbol: ccTouchesBegan */

/* GameOption::ccTouchesBegan(cocos2d::CCSet*, cocos2d::CCEvent*) */

undefined8 GameOption::ccTouchesBegan(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCNode *pCVar3;
  int *piVar4;
  CCSet *in_r2;
  CCEvent *in_r3;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined8 uVar8;
  CCSet *local_20;
  CCEvent *local_1c;
  CCSet *local_18;
  CCEvent *local_14;
  
  local_20 = param_1;
  local_1c = param_2;
  if (((**(char **)(DAT_001334e0 + 0x1333ea) == '\0') &&
      (**(char **)(DAT_001334e4 + 0x1333f6) == '\0')) &&
     (**(char **)(DAT_001334e8 + 0x133402) == '\0')) {
    local_18 = in_r2;
    local_14 = in_r3;
    iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar5 = *(undefined4 *)(iVar1 + 0x18);
    puVar7 = *(undefined4 **)(DAT_001334ec + 0x133418);
    uVar6 = *(undefined4 *)(iVar1 + 0x1c);
    uVar2 = __divsf3(*puVar7,DAT_001334f0);
    __divsf3(uVar5,uVar2);
    uVar2 = __divsf3(puVar7[1],DAT_001334f4);
    uVar8 = __divsf3(uVar6,uVar2);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
    local_20 = local_18;
    local_1c = local_14;
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
    iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
    if (iVar1 == 0) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
      iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
      if (iVar1 == 0) {
        pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
        iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
        if (iVar1 == 0) {
          pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,5);
          iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
          if (iVar1 == 0) {
            pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,6);
            iVar1 = Sprite_Touch2(pCVar3,(CCPoint)local_18);
            if (iVar1 == 0) goto LAB_001334dc;
            iVar1 = 6;
          }
          else {
            iVar1 = 5;
          }
        }
        else {
          iVar1 = 4;
        }
      }
      else {
        iVar1 = 3;
      }
    }
    else {
      iVar1 = 2;
    }
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
    (**(code **)(*piVar4 + 0x6c))(piVar4,1);
  }
LAB_001334dc:
  return CONCAT44(local_1c,local_20);
}


