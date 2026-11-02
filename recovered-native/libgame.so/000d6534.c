/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d6534  Symbol: Item_Hero_Equip_View */

/* Market_Equip::Item_Hero_Equip_View(int, int) */

void __thiscall Market_Equip::Item_Hero_Equip_View(Market_Equip *this,int param_1,int param_2)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int local_bc;
  int local_b4;
  int *local_b0;
  undefined auStack_a0 [36];
  int local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined auStack_5c [36];
  int local_38 [4];
  undefined4 local_28;
  
  memset(auStack_a0,0,0x44);
  memset(auStack_5c,0,0x44);
  local_38[0] = 7;
  local_38[1] = 7;
  local_70 = 4;
  local_74 = 2;
  local_38[3] = 6;
  local_b0 = &local_7c;
  local_78 = 1;
  local_38[2] = 5;
  local_6c = 3;
  local_28 = 5;
  piVar11 = local_38;
  local_bc = 1;
  iVar12 = DAT_000d67b8 + 0xd6580;
  do {
    iVar10 = local_bc + 8;
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
    if (iVar2 != 0) {
      if (param_2 == 0) {
        if (param_1 < 8) {
          piVar4 = *(int **)(iVar12 + DAT_000d6aac);
          piVar6 = *(int **)(iVar12 + DAT_000d6ab0);
          if ((*(int *)(*piVar4 + (*piVar6 * 9 + local_bc + DAT_000d6ab4) * 4 + 4) <
               *(int *)(*(int *)(iVar12 + DAT_000d6ab8) +
                        *(int *)(*piVar4 + (*(int *)(this + 0x110) + -8) * 0x50 +
                                           *(int *)(this + 0x138) * 0x14 + *piVar6 * 0x2d0 +
                                DAT_000d6abc) * 0x18 + 8)) ||
             ((iVar2 = *local_b0, iVar2 != param_1 && (*piVar11 != param_1)))) {
LAB_000d6998:
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
            iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
            if (iVar2 != 0) {
LAB_000d6a48:
              pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
              piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
              uVar5 = 0x7f;
              pcVar9 = *(code **)(*piVar4 + 0xec);
              goto LAB_000d6a5a;
            }
          }
          else {
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
            piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
            (**(code **)(*piVar3 + 0x6c))(piVar3,0);
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
            piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
            (**(code **)(*piVar3 + 0x6c))(piVar3,0);
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
            iVar8 = cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
            if (iVar8 != 0) {
              pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
              piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
              (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
              if (param_1 == iVar2) {
                local_b4 = *piVar4;
                iVar8 = *piVar6 * 0x2d0;
                iVar7 = local_b4 + local_bc * 0x50 + iVar8;
                iVar2 = DAT_000d6ac0;
              }
              else {
                if (param_1 != *piVar11) goto LAB_000d6a94;
                local_b4 = *piVar4;
                iVar8 = *piVar6 * 0x2d0;
                iVar7 = local_b4 + local_bc * 0x50 + iVar8;
                iVar2 = DAT_000d6ac4;
              }
              iVar7 = *(int *)(iVar7 + iVar2 + 4);
              iVar2 = *(int *)(local_b4 +
                               (*(int *)(this + 0x110) + -8) * 0x50 + *(int *)(this + 0x138) * 0x14
                               + iVar8 + DAT_000d6ac0 + 4);
              if (iVar7 < iVar2) {
LAB_000d6938:
                pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
                pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
                iVar2 = 0;
                goto LAB_000d695e;
              }
              if (iVar2 < iVar7) goto LAB_000d6952;
              goto LAB_000d6a60;
            }
          }
        }
        else {
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
          if (iVar2 != 0) {
            iVar2 = *(int *)(**(int **)(iVar12 + DAT_000d6aac) +
                             (**(int **)(iVar12 + DAT_000d6ab0) * 9 + local_bc + DAT_000d6ab4) * 4 +
                            4);
            iVar8 = *(int *)(*(int *)(iVar12 + DAT_000d6ab8) +
                             *(int *)(**(int **)(iVar12 + DAT_000d6aac) +
                                      *(int *)(this + 0x138) * 0x14 +
                                      (*(int *)(this + 0x110) + -8) * 0x50 +
                                      **(int **)(iVar12 + DAT_000d6ab0) * 0x2d0 + DAT_000d6abc) *
                             0x18 + 8);
LAB_000d6a30:
            if (iVar2 < iVar8) goto LAB_000d6a48;
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
            piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
            uVar5 = 0xff;
            pcVar9 = *(code **)(*piVar4 + 0xec);
LAB_000d6a5a:
            (*pcVar9)(piVar4,uVar5);
LAB_000d6a60:
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
            piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
            (**(code **)(*piVar4 + 0x6c))(piVar4,0);
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
            pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
            piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
            uVar5 = 0;
            pcVar9 = *(code **)(*piVar4 + 0x6c);
LAB_000d6a92:
            (*pcVar9)(piVar4,uVar5);
          }
        }
      }
      else if (param_1 < 8) {
        piVar4 = *(int **)(iVar12 + DAT_000d67bc);
        piVar6 = *(int **)(iVar12 + DAT_000d67c4);
        if ((*(int *)((*piVar6 * 9 + local_bc + DAT_000d67c0) * 4 + *piVar4 + 4) <
             *(int *)(*(int *)(iVar12 + DAT_000d67c8) +
                      *(int *)(*(int *)(this + 0x130) * 0x14 + *piVar6 * 2000 + *piVar4 +
                              DAT_000d67cc) * 0x18 + 8)) ||
           ((iVar2 = *local_b0, iVar2 != param_1 && (*piVar11 != param_1)))) goto LAB_000d6998;
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
        (**(code **)(*piVar3 + 0x6c))(piVar3,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
        (**(code **)(*piVar3 + 0x6c))(piVar3,0);
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        iVar8 = cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
        if (iVar8 != 0) {
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
          (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
          if (param_1 == iVar2) {
            iVar2 = *piVar4 + *piVar6 * 2000 + *(int *)(this + 0x130) * 0x14;
            iVar8 = *(int *)(*piVar4 + *piVar6 * 0x2d0 + local_bc * 0x50 + DAT_000d67d0 + 4);
          }
          else {
            if (param_1 != *piVar11) goto LAB_000d6a94;
            iVar8 = *(int *)(*piVar4 + *piVar6 * 0x2d0 + local_bc * 0x50 + DAT_000d67d8 + 4);
            iVar2 = *piVar4 + *piVar6 * 2000 + *(int *)(this + 0x130) * 0x14;
          }
          iVar2 = *(int *)(iVar2 + DAT_000d67d4 + 4);
          if (iVar8 < iVar2) goto LAB_000d6938;
          if (iVar8 <= iVar2) goto LAB_000d6a60;
LAB_000d6952:
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
          iVar2 = 1;
LAB_000d695e:
          piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,iVar2);
          uVar5 = 1;
          pcVar9 = *(code **)(*piVar4 + 0x6c);
          goto LAB_000d6a92;
        }
      }
      else {
        pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,iVar10);
        if (iVar2 != 0) {
          iVar8 = *(int *)(*(int *)(iVar12 + DAT_000d67c8) +
                           *(int *)(**(int **)(iVar12 + DAT_000d67bc) +
                                    *(int *)(this + 0x130) * 0x14 +
                                    **(int **)(iVar12 + DAT_000d67c4) * 2000 + DAT_000d67cc) * 0x18
                          + 8);
          iVar2 = *(int *)(**(int **)(iVar12 + DAT_000d67bc) +
                           (**(int **)(iVar12 + DAT_000d67c4) * 9 + local_bc + DAT_000d67c0) * 4 + 4
                          );
          goto LAB_000d6a30;
        }
      }
    }
LAB_000d6a94:
    piVar11 = piVar11 + 1;
    local_bc = local_bc + 1;
    local_b0 = local_b0 + 1;
    if (local_bc == 9) {
      return;
    }
  } while( true );
}


