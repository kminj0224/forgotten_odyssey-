/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e5980  Symbol: MargetTouchesEnded */

/* Market_Unit::MargetTouchesEnded(cocos2d::CCPoint) */

void Market_Unit::MargetTouchesEnded(CCPoint param_1)

{
  char cVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  New_Notice *this;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  CCPoint in_r1;
  undefined4 in_r2;
  undefined4 *puVar8;
  int iVar9;
  int local_30;
  
  iVar9 = DAT_000e5c2c + 0xe5996;
  if (**(char **)(iVar9 + DAT_000e5c30) != '\0') {
    **(char **)(iVar9 + DAT_000e5c30) = '\0';
    return;
  }
  if (**(char **)(iVar9 + DAT_000e5c34) != '\0') {
    return;
  }
  if (**(char **)(iVar9 + DAT_000e5c38) != '\0') {
    return;
  }
  if (**(int **)(iVar9 + DAT_000e5c3c) == 0xb) {
    return;
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
  (**(code **)(*piVar2 + 0x6c))(piVar2,0);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
  iVar4 = Sprite_Touch2(pCVar3,in_r1);
  if (iVar4 != 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
    (**(code **)(*piVar2 + 0x6c))(piVar2,0);
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
  iVar4 = (**(code **)(*piVar2 + 0x68))();
  if (iVar4 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
    iVar4 = Sprite_Touch2(pCVar3,in_r1);
    if (iVar4 != 0) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(DAT_000e5c40 + 0xe5a44),*(undefined4 *)(param_1 + 0x138));
    }
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
  iVar4 = (**(code **)(*piVar2 + 0x68))();
  if (iVar4 != 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
    iVar4 = Sprite_Touch2(pCVar3,in_r1);
    if (iVar4 != 0) {
      piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
      (**(code **)(*piVar2 + 0x6c))(piVar2,0);
      iVar6 = **(int **)(iVar9 + DAT_000e5c44);
      iVar4 = *(int *)(iVar6 + (**(int **)(iVar9 + DAT_000e5c48) * 9 + *(int *)(param_1 + 0x138) +
                               DAT_000e5c64) * 4 + 4);
      if (iVar4 < 0x1e) {
        if (iVar4 < 0x14) {
          iVar4 = GetMoney(*(int *)(iVar6 + (**(int **)(iVar9 + DAT_000e5c48) + DAT_000e5c50) * 4 +
                                   4),*(int *)(param_1 + 0x158));
          if (iVar4 == 0) {
            this = (New_Notice *)New_Notice::node();
            (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,0x1e,0x1e);
            New_Notice::go_CP_Item(this);
            goto LAB_000e5ada;
          }
        }
        else if (*(int *)(iVar6 + DAT_000e5c68) < 100) goto LAB_000e5ada;
        *(undefined4 *)(param_1 + 0x140) = 2;
        Unit_Upgrade_Notice((Market_Unit *)param_1);
        Set_Max_Lv();
        FileSave();
      }
    }
  }
LAB_000e5ada:
  iVar4 = 0;
  local_30 = 0;
  cVar1 = (char)DAT_000e5c60;
  do {
    puVar8 = (undefined4 *)(iVar4 + *(int *)(iVar9 + DAT_000e5c6c));
    uVar5 = __floatsisf(*puVar8);
    iVar6 = __aeabi_fcmplt(uVar5,in_r1);
    if (iVar6 != 0) {
      uVar5 = __floatsisf(puVar8[2]);
      iVar6 = __aeabi_fcmpgt(uVar5,in_r1);
      if (iVar6 != 0) {
        uVar5 = __floatsisf(puVar8[1]);
        iVar6 = __aeabi_fcmplt(uVar5,in_r2);
        if (iVar6 != 0) {
          uVar5 = __floatsisf(puVar8[3]);
          iVar6 = __aeabi_fcmpgt(uVar5,in_r2);
          if (iVar6 != 0) {
            Touch_Image_Pos((Market_Unit *)param_1,local_30);
            Draw_Unit((Market_Unit *)param_1,local_30);
            Image_Name((Market_Unit *)param_1,local_30);
            if (*(char *)(**(int **)(iVar9 + DAT_000e5c44) + 1) != '\0') {
              pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
              CocosDenshion::SimpleAudioEngine::playEffect(pcVar7,(bool)(cVar1 + -0x1c));
            }
          }
        }
      }
    }
    iVar4 = iVar4 + 0x10;
    local_30 = local_30 + 1;
  } while (iVar4 != 0x90);
  return;
}


