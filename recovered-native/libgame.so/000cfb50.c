/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cfb50  Symbol: ccTouchesEnded */

/* Equip_Layer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Equip_Layer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  CCArray *this;
  int iVar3;
  int *piVar4;
  int iVar5;
  char *pcVar6;
  Hero_HeroEquip *this_00;
  uint uVar7;
  int *piVar8;
  char cVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  code *pcVar15;
  undefined4 *puVar16;
  int iVar17;
  int *piVar18;
  float extraout_s0;
  undefined8 uVar19;
  float extraout_s1;
  uint local_68;
  undefined4 local_40;
  undefined4 local_3c;
  CCPoint local_38;
  undefined4 local_34;
  CCPoint local_30;
  undefined4 local_2c;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar12 = *(undefined4 *)(iVar1 + 0x18);
  puVar16 = *(undefined4 **)(DAT_000cfe78 + 0xcfb66);
  uVar13 = *(undefined4 *)(iVar1 + 0x1c);
  uVar2 = __divsf3(*puVar16,DAT_000cfe7c);
  __divsf3(uVar12,uVar2);
  uVar2 = __divsf3(puVar16[1],DAT_000cfe80);
  uVar19 = __divsf3(uVar13,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  puVar16 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
  __subsf3(local_40,*puVar16);
  iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
  uVar19 = __addsf3(local_3c,*(undefined4 *)(iVar1 + 4));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  local_38 = local_30;
  local_34 = local_2c;
  puVar16 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
  iVar1 = __aeabi_fcmplt(*puVar16,local_40);
  if (iVar1 != 0) {
    puVar16 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
    uVar2 = __addsf3(*puVar16,DAT_000cfe84);
    iVar1 = __aeabi_fcmpgt(uVar2,local_40);
    if (iVar1 != 0) {
      iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar2 = __subsf3(DAT_000cfe80,*(undefined4 *)(iVar1 + 4));
      iVar1 = __aeabi_fcmpgt(uVar2,local_3c);
      if (iVar1 != 0) {
        iVar1 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
        uVar2 = __addsf3(*(undefined4 *)(iVar1 + 4),DAT_000cfe88);
        uVar2 = __subsf3(DAT_000cfe80,uVar2);
        iVar1 = __aeabi_fcmplt(uVar2,local_3c);
        if (iVar1 != 0) {
          this = (CCArray *)(**(code **)(*(int *)param_1 + 0x58))(param_1);
          local_68 = 0;
          do {
            uVar7 = cocos2d::CCArray::count(this);
            if (uVar7 <= local_68) {
              return;
            }
            piVar8 = (int *)cocos2d::CCArray::objectAtIndex(this,local_68);
            local_38 = local_30;
            local_34 = local_2c;
            iVar3 = Sprite_Touch2((CCNode *)piVar8,local_30);
            iVar1 = DAT_000cfe8c;
            if ((iVar3 != 0) && (iVar3 = (**(code **)(*piVar8 + 0xa0))(piVar8), iVar3 != iVar1)) {
              iVar3 = (**(code **)(*piVar8 + 0xa0))(piVar8);
              piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
              pcVar15 = *(code **)(*piVar4 + 0x3c);
              (**(code **)(*piVar8 + 0x38))(piVar8);
              uVar19 = (**(code **)(*piVar8 + 0x38))(piVar8);
              cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20))
              ;
              (*pcVar15)(piVar4,aCStack_28);
              iVar1 = *(int *)(param_1 + 0x124);
              if (iVar1 == iVar3) {
                piVar8 = *(int **)(DAT_000cfe90 + 0xcfcf2);
                piVar4 = *(int **)(DAT_000cfe94 + 0xcfcf6);
                iVar10 = *piVar8;
                iVar14 = *piVar4;
                iVar17 = 0;
                iVar5 = 0;
                do {
                  if ((iVar5 < *(int *)((iVar10 + DAT_000cfe98) * 4 + iVar14)) &&
                     (*(int *)(iVar14 + iVar10 * 2000 + iVar17 + DAT_000cfe9c) == 0)) {
                    piVar18 = *(int **)(DAT_000cfea0 + 0xcfd40);
                    iVar17 = iVar14 + iVar5 * 0x14 + iVar10 * 2000;
                    puVar16 = (undefined4 *)(iVar17 + DAT_000cfe9c);
                    iVar5 = iVar14 + iVar10 * 0x2d0 + *piVar18 * 0x50 + iVar1 * 0x14;
                    puVar11 = (undefined4 *)(DAT_000cfea4 + iVar5);
                    *puVar16 = *puVar11;
                    puVar16[1] = puVar11[1];
                    puVar16 = (undefined4 *)(iVar17 + DAT_000cfea8);
                    puVar11 = (undefined4 *)(DAT_000cfeac + iVar5);
                    puVar16[1] = puVar11[1];
                    *(undefined4 *)(iVar17 + DAT_000cfeb0) = *(undefined4 *)(iVar5 + 0x2680);
                    *puVar16 = *puVar11;
                    if (iVar1 < 2) {
                      if (*(char *)(iVar14 + 1) != '\0') {
                        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                        cVar9 = (char)DAT_000cfeb4 + -0x52;
LAB_000cfdba:
                        CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)cVar9);
                      }
                    }
                    else if (*(char *)(iVar14 + 1) != '\0') {
                      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                      cVar9 = (char)DAT_000cfeb8 + -0x44;
                      goto LAB_000cfdba;
                    }
                    iVar5 = *piVar4 + iVar1 * 0x14 + *piVar18 * 0x50 + *piVar8 * 0x2d0;
                    puVar16 = (undefined4 *)(iVar5 + DAT_000cfea4);
                    *puVar16 = 0;
                    puVar16[1] = 0;
                    puVar16 = (undefined4 *)(iVar5 + DAT_000cfeac);
                    puVar16[1] = 0;
                    *(undefined4 *)(iVar5 + 0x2680) = 0;
                    *puVar16 = 0;
                    iVar5 = (**(code **)(*(int *)param_1 + 0x90))(param_1);
                    InventoryLayer::reset(*(InventoryLayer **)(iVar5 + 0x114));
                    this_00 = (Hero_HeroEquip *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
                    Hero_HeroEquip::SetHeroState(this_00);
                    Draw_Item((Equip_Layer *)param_1,iVar1);
                    break;
                  }
                  iVar5 = iVar5 + 1;
                  iVar17 = iVar17 + 0x14;
                } while (iVar5 != 100);
              }
              *(int *)(param_1 + 0x124) = iVar3;
            }
            local_68 = local_68 + 1;
          } while( true );
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x124) = 0xffffffff;
  piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,DAT_000cfe8c);
  pcVar15 = *(code **)(*piVar8 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
  (*pcVar15)(piVar8,aCStack_20);
  return;
}


