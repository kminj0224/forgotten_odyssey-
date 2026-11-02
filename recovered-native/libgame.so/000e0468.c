/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e0468  Symbol: Item_Buy */

/* Market_Store::Item_Buy(int) */

void __thiscall Market_Store::Item_Buy(Market_Store *this,int param_1)

{
  int *piVar1;
  CCNode *pCVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  code *pcVar12;
  int *piVar13;
  int iVar14;
  
  iVar4 = *(int *)(this + (param_1 + 0x50) * 4);
  piVar1 = *(int **)(DAT_000e0580 + 0xe047c);
  piVar13 = *(int **)(DAT_000e0584 + 0xe0480);
  iVar10 = *piVar1;
  iVar14 = iVar10 * 2000;
  iVar6 = *piVar13;
  iVar7 = 0;
  iVar5 = 0;
  do {
    if (*(int *)(iVar6 + iVar14 + iVar7 + DAT_000e0588) == 0) {
      iVar8 = *(int *)(DAT_000e0590 + 0xe04c2);
      iVar7 = iVar6 + (iVar10 + DAT_000e058c) * 4;
      *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) - *(int *)(iVar4 * 0x18 + iVar8);
      iVar6 = iVar6 + iVar5 * 0x14 + iVar14;
      piVar11 = (int *)(iVar6 + DAT_000e0588);
      *piVar11 = iVar4;
      piVar11[1] = 0;
      iVar7 = DAT_000e0598;
      iVar8 = iVar8 + iVar4 * 0x18;
      if (iVar4 < 0x51) {
        uVar9 = *(undefined4 *)(iVar8 + 0xc);
        *(undefined4 *)(iVar6 + DAT_000e0594 + 4) = uVar9;
      }
      else {
        uVar9 = *(undefined4 *)(iVar8 + 0x10);
        *(undefined4 *)(iVar6 + DAT_000e0594 + 4) = uVar9;
      }
      *(undefined4 *)(iVar6 + iVar7) = uVar9;
      InventoryLayer::Item_SetInventory(*(InventoryLayer **)(this + 0x128),iVar5);
      break;
    }
    iVar5 = iVar5 + 1;
    iVar7 = iVar7 + 0x14;
  } while (iVar5 != 100);
  Draw_Number::SetNumber
            (*(Draw_Number **)(this + 0x138),*(int *)(*piVar13 + (*piVar1 + DAT_000e058c) * 4 + 4),2
            );
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  KG_removeChild(pCVar2,true);
  pcVar12 = *(code **)(*(int *)this + 0xd0);
  uVar9 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  (*pcVar12)(this,uVar9,1);
  **(undefined4 **)(DAT_000e059c + 0xe0562) = 4;
  if (*(char *)(*piVar13 + 1) != '\0') {
    pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar3,(bool)((char)DAT_000e05a0 + 'x'));
  }
  return;
}


