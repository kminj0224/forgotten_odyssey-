/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e3ae4  Symbol: ccTouchesEnded */

/* Market_Store::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Market_Store::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  CCNode *pCVar4;
  New_Notice *pNVar5;
  int *piVar6;
  undefined *puVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  int *piVar15;
  undefined4 *puVar16;
  int *piVar17;
  int iVar18;
  undefined8 uVar19;
  undefined auStack_a0 [16];
  CCPoint local_90;
  undefined4 local_8c;
  CCPoint local_88;
  undefined4 local_84;
  char acStack_80 [100];
  int local_1c;
  
  iVar18 = DAT_000e3e20 + 0xe3af0;
  piVar15 = *(int **)(iVar18 + DAT_000e3e24);
  local_1c = *piVar15;
  pcVar11 = *(char **)(iVar18 + DAT_000e3e28);
  if (*pcVar11 != '\0') goto LAB_000e4292;
  if (**(char **)(iVar18 + DAT_000e3e2c) != '\0') {
    **(char **)(iVar18 + DAT_000e3e2c) = '\0';
    goto LAB_000e4292;
  }
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  local_90 = *(undefined4 *)(iVar1 + 0x18);
  local_8c = *(undefined4 *)(iVar1 + 0x1c);
  puVar16 = *(undefined4 **)(iVar18 + DAT_000e3e34);
  uVar2 = __divsf3(*puVar16,DAT_000e3e30);
  __divsf3(local_90,uVar2);
  uVar2 = __divsf3(puVar16[1],DAT_000e3e38);
  uVar19 = __divsf3(local_8c,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_88,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  local_90 = local_88;
  local_8c = local_84;
  if ((**(char **)(iVar18 + DAT_000e3e3c) != '\0') || (**(char **)(iVar18 + DAT_000e3e40) != '\0'))
  goto LAB_000e4292;
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6d);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6e);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6f);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6c);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  if (*(char *)(*(int *)(param_1 + 0x128) + 0x130) == '\0') {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6d);
    iVar1 = Sprite_Touch2(pCVar4,local_90);
    if (iVar1 != 0) {
      piVar17 = *(int **)(iVar18 + DAT_000e3e44);
      piVar3 = *(int **)(iVar18 + DAT_000e3e48);
      if (*(int *)((*piVar17 + DAT_000e3e4c) * 4 + *piVar3) == 100) {
        pNVar5 = (New_Notice *)New_Notice::node();
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e3e50,DAT_000e3e50);
        New_Notice::noticeWithType(pNVar5,(char *)(DAT_000e3e54 + 0xe3c12),DAT_000e3e58,0);
        goto LAB_000e4292;
      }
      pNVar5 = (New_Notice *)New_Notice::node();
      memset(acStack_80,0,100);
      iVar9 = 1;
      piVar12 = *(int **)(iVar18 + DAT_000e3e5c);
      iVar1 = 0;
      piVar6 = piVar12;
      do {
        if (*piVar6 == *(int *)((*piVar17 + DAT_000e3e4c) * 4 + *piVar3)) {
          iVar1 = iVar9;
        }
        iVar9 = iVar9 + 1;
        piVar6 = piVar6 + 3;
      } while (iVar9 != 0x15);
      iVar9 = piVar12[iVar1 * 3 + 1];
      if (iVar9 == 0) {
        iVar9 = piVar12[iVar1 * 3 + 2];
        pcVar8 = (char *)(DAT_000e3e60 + 0xe3c66);
        iVar1 = DAT_000e3e64 + 0xe3c68;
      }
      else {
        pcVar8 = (char *)(DAT_000e4234 + 0xe41fa);
        iVar1 = (int)&DAT_000e41fc + DAT_000e4238;
      }
      sprintf(acStack_80,pcVar8,iVar1,iVar9);
      New_Notice::noticeWithType(pNVar5,acStack_80,4,1);
      (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e3e50,DAT_000e3e50);
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6e);
    iVar1 = Sprite_Touch2(pCVar4,local_90);
    if (iVar1 != 0) {
      Array_Call(**(_System ***)(iVar18 + DAT_000e3e48));
      InventoryLayer::reset(*(InventoryLayer **)(param_1 + 0x128));
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6f);
    iVar1 = Sprite_Touch2(pCVar4,local_90);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x118) != -1)) {
      piVar17 = *(int **)(iVar18 + DAT_000e3e48);
      piVar3 = *(int **)(iVar18 + DAT_000e3e44);
      if (*(int *)(*piVar17 + *(int *)(param_1 + 0x11c) * 0x14 + *piVar3 * 2000 + DAT_000e3e68) ==
          0xa9) {
        pNVar5 = (New_Notice *)New_Notice::node();
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e3e50,DAT_000e3e50);
        New_Notice::noticeWithType(pNVar5,(char *)(DAT_000e3e6c + 0xe3d1a),DAT_000e3e58,0);
      }
      else {
        pNVar5 = (New_Notice *)New_Notice::node();
        iVar1 = *(int *)(param_1 + 0x118);
        if (iVar1 == 0) {
          iVar13 = *(int *)(param_1 + 0x11c);
          if (iVar13 != -1) {
            iVar10 = *(int *)(*piVar17 + iVar13 * 0x14 + *piVar3 * 2000 + DAT_000e3e68);
            if (iVar10 == 0) goto LAB_000e4292;
            iVar9 = 2;
            pcVar8 = (char *)0x0;
            goto LAB_000e3ebe;
          }
        }
        else {
          if (iVar1 == 1) {
            iVar9 = Inventory_Is_Full();
            if (iVar9 != 0) {
              memset(acStack_80,0,100);
              iVar9 = 0;
              piVar12 = *(int **)(iVar18 + DAT_000e3e5c);
              iVar1 = 1;
              piVar6 = piVar12;
              do {
                if (*piVar6 == *(int *)((*piVar3 + DAT_000e3e4c) * 4 + *piVar17)) {
                  iVar9 = iVar1;
                }
                iVar1 = iVar1 + 1;
                piVar6 = piVar6 + 3;
              } while (iVar1 != 0x15);
              iVar1 = piVar12[iVar9 * 3 + 1];
              if (iVar1 == 0) {
                iVar1 = piVar12[iVar9 * 3 + 2];
                pcVar8 = (char *)(DAT_000e3e70 + 0xe3dc6);
                iVar9 = DAT_000e3e74 + 0xe3dc8;
              }
              else {
                pcVar8 = (char *)(DAT_000e42a4 + 0xe4244);
                iVar9 = DAT_000e42a8 + 0xe4246;
              }
              sprintf(acStack_80,pcVar8,iVar9,iVar1);
              New_Notice::noticeWithType(pNVar5,acStack_80,3,1);
              goto LAB_000e3ec2;
            }
            iVar9 = ShopLayer::getItem_Number
                              (*(ShopLayer **)(param_1 + 0x130),*(int *)(param_1 + 0x120));
            if (iVar9 == 0) goto LAB_000e4292;
            ShopLayer::getItem_Number(*(ShopLayer **)(param_1 + 0x130),*(int *)(param_1 + 0x120));
            iVar9 = ShopLayer::getItem_Number
                              (*(ShopLayer **)(param_1 + 0x130),*(int *)(param_1 + 0x120));
            iVar13 = *(int *)(param_1 + 0x120);
            pcVar8 = *(char **)(iVar9 * 0xc + *(int *)(iVar18 + DAT_000e3e78));
            iVar10 = ShopLayer::getItem_Number(*(ShopLayer **)(param_1 + 0x130),iVar13);
            iVar9 = 1;
          }
          else {
            iVar13 = *(int *)(param_1 + 0x124);
            if (((iVar13 == -1) ||
                (iVar10 = *(int *)(iVar13 * 4 + *(int *)(iVar18 + DAT_000e41fc)), iVar10 == 0)) ||
               (*(int *)(*piVar17 + DAT_000e4204) <
                *(int *)(iVar10 * 0x18 + *(int *)(iVar18 + DAT_000e4200)))) goto LAB_000e4292;
            pcVar8 = *(char **)(iVar10 * 0xc + *(int *)(iVar18 + DAT_000e4208));
            iVar9 = 1;
            iVar1 = 2;
          }
LAB_000e3ebe:
          New_Notice::noticeWithTypeItem(pNVar5,iVar9,pcVar8,iVar13,1,iVar1,iVar10);
        }
LAB_000e3ec2:
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e420c,DAT_000e420c);
      }
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6c);
    iVar1 = Sprite_Touch2(pCVar4,local_90);
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x11c) != -1)) {
      iVar1 = **(int **)(iVar18 + DAT_000e4214) +
              *(int *)(param_1 + 0x11c) * 0x14 + **(int **)(iVar18 + DAT_000e4210) * 2000;
      if (*(int *)(iVar1 + DAT_000e4218) < 99) {
        iVar1 = *(int *)(iVar1 + DAT_000e421c);
        if (iVar1 - 0x51U < 0x46) {
          pNVar5 = (New_Notice *)New_Notice::node();
          (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e420c,DAT_000e420c);
          pcVar8 = (char *)(DAT_000e4220 + 0xe3f3e);
        }
        else {
          if (((iVar1 != 0xa9) && (iVar1 != 0x9e)) && (iVar1 != 0)) {
            pNVar5 = (New_Notice *)New_Notice::node();
            (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e42ac,DAT_000e42ac);
            New_Notice::noticeWithTypeItem(pNVar5,10,(char *)0x0,*(int *)(param_1 + 0x11c),1,0x12,0)
            ;
            goto LAB_000e3f96;
          }
          pNVar5 = (New_Notice *)New_Notice::node();
          (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e420c,DAT_000e420c);
          pcVar8 = (char *)(DAT_000e4224 + 0xe3f72);
        }
      }
      else {
        pNVar5 = (New_Notice *)New_Notice::node();
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,pNVar5,DAT_000e420c,DAT_000e420c);
        pcVar8 = (char *)(DAT_000e4228 + 0xe3f8e);
      }
      New_Notice::noticeWithType(pNVar5,pcVar8,DAT_000e422c,0);
    }
LAB_000e3f96:
    if (*(int *)(*(int *)(param_1 + 0x128) + 0x134) < 0) {
      iVar1 = *(int *)(*(int *)(param_1 + 0x130) + 0x140);
      if (iVar1 < 0) {
        iVar18 = *(int *)(*(int *)(param_1 + 0x134) + 0x120);
        if (iVar18 < 0) {
          Item_Buy_Sell_Effect((Market_Store *)param_1);
          *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
          *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
          goto LAB_000e41c0;
        }
        *(int *)(param_1 + 0x124) = iVar18;
        Item_Text_View_Layer::Set_Item_Text(*(Item_Text_View_Layer **)(param_1 + 300),iVar18,3);
        *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
        Item_Buy_Sell_Effect_Stop((Market_Store *)param_1);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x69);
        (**(code **)(*piVar3 + 0xec))(piVar3,0);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6a);
        (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
        *(undefined4 *)(param_1 + 0x118) = 2;
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6b);
        puVar7 = auStack_a0 + 0xc;
        pcVar14 = *(code **)(*piVar3 + 0xf4);
      }
      else {
        *(int *)(param_1 + 0x120) = iVar1;
        Item_Text_View_Layer::Set_Item_Text(*(Item_Text_View_Layer **)(param_1 + 300),iVar1,2);
        iVar1 = ShopLayer::getItem_Number
                          (*(ShopLayer **)(param_1 + 0x130),*(int *)(param_1 + 0x120));
        Item_Hero_Equip_View
                  ((Market_Store *)param_1,
                   *(int *)(*(int *)(iVar18 + DAT_000e4200) + iVar1 * 0x18 + 0x14),1);
        *(undefined4 *)(param_1 + 0x11c) = 0xffffffff;
        *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
        Item_Buy_Sell_Effect_Stop((Market_Store *)param_1);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x69);
        (**(code **)(*piVar3 + 0xec))(piVar3,0);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6a);
        (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
        *(undefined4 *)(param_1 + 0x118) = 1;
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6b);
        puVar7 = auStack_a0 + 8;
        pcVar14 = *(code **)(*piVar3 + 0xf4);
      }
LAB_000e41a2:
      *puVar7 = 0x7f;
      puVar7[1] = 0;
      puVar7[2] = 0;
    }
    else {
      piVar3 = *(int **)(iVar18 + DAT_000e4214);
      piVar17 = *(int **)(iVar18 + DAT_000e4210);
      if ((*(int *)(param_1 + 0x11c) == *(int *)(*(int *)(param_1 + 0x128) + 0x134)) &&
         (*(int *)(*piVar3 + *(int *)(param_1 + 0x11c) * 0x14 + *piVar17 * 2000 + DAT_000e421c) ==
          0x9e)) {
        uVar2 = KG_RandomBox::node();
        (**(code **)(*(int *)param_1 + 0xcc))(param_1,uVar2,0x70,0x70);
        Rmove_Item(*(int *)(param_1 + 0x11c));
        InventoryLayer::reset(*(InventoryLayer **)(param_1 + 0x128));
        if (*(char *)(*piVar3 + 1) != '\0') {
          pcVar8 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::playEffect(pcVar8,(bool)((char)DAT_000e4230 + '\f'));
        }
      }
      iVar1 = *(int *)(*(int *)(param_1 + 0x128) + 0x134);
      *(int *)(param_1 + 0x11c) = iVar1;
      *(int *)(param_1 + 0x194) = iVar1;
      Item_Text_View_Layer::Set_Item_Text(*(Item_Text_View_Layer **)(param_1 + 300),iVar1,0);
      Item_Hero_Equip_View
                ((Market_Store *)param_1,
                 *(int *)(*(int *)(iVar18 + DAT_000e4200) +
                          *(int *)(*piVar3 + *(int *)(param_1 + 0x11c) * 0x14 + *piVar17 * 2000 +
                                  DAT_000e421c) * 0x18 + 0x14),0);
      *(undefined4 *)(param_1 + 0x120) = 0xffffffff;
      *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
      Item_Buy_Sell_Effect_Stop((Market_Store *)param_1);
      piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x69);
      (**(code **)(*piVar6 + 0xec))(piVar6,0xff);
      piVar6 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6a);
      (**(code **)(*piVar6 + 0xec))(piVar6,0);
      *(undefined4 *)(param_1 + 0x118) = 0;
      iVar18 = *(int *)(*piVar3 + *(int *)(param_1 + 0x11c) * 0x14 + *piVar17 * 2000 + DAT_000e421c)
      ;
      if (((iVar18 - 0x51U < 0x46) || (iVar18 == 0xa9)) || (iVar18 == 0)) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6b);
        puVar7 = auStack_a0;
        pcVar14 = *(code **)(*piVar3 + 0xf4);
        goto LAB_000e41a2;
      }
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x6b);
      pcVar14 = *(code **)(*piVar3 + 0xf4);
      auStack_a0[4] = 0xff;
      auStack_a0[5] = 0xff;
      auStack_a0[6] = 0xff;
    }
    (*pcVar14)();
  }
LAB_000e41c0:
  iVar18 = Inventory_Is_Full();
  if (iVar18 == 0) {
    Stop_inventory_Socket_Effect();
  }
  else {
    Set_Inventory_Socket_Effect((Market_Store *)param_1);
  }
  iVar18 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x71);
  if ((iVar18 != 0) && (*pcVar11 == '\0')) {
    *pcVar11 = '\x01';
  }
LAB_000e4292:
  if (local_1c == *piVar15) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


