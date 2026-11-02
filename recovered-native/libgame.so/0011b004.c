/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011b004  Symbol: Inventory_InAppItem */

/* UI_Notice::Inventory_InAppItem(cocos2d::CCLayer*, int, int) */

void UI_Notice::Inventory_InAppItem(CCLayer *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  CCArray *this;
  int iVar3;
  int iVar4;
  CCAction *pCVar5;
  char *pcVar6;
  undefined4 uVar7;
  int in_r3;
  undefined4 *puVar8;
  undefined4 uVar9;
  int *piVar10;
  code *pcVar11;
  int iVar12;
  float in_s0;
  float fVar13;
  float in_s1;
  undefined8 uVar14;
  uint local_b8;
  CCPoint local_a0;
  int local_9c;
  CCSize aCStack_98 [2];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  iVar12 = DAT_0011b1f0 + 0x11b018;
  piVar10 = *(int **)(iVar12 + DAT_0011b1f4);
  local_1c = *piVar10;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a0,in_s0,in_s1);
  uVar14 = vDrawScript_Lode((char *)(DAT_0011b200 + 0x11b03e),(char *)(DAT_0011b204 + 0x11b040),
                            (CCNode *)param_2,local_a0,local_9c,2000,true,true);
  fVar13 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_98,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011b214 + 0x11b068),aCStack_98,1,
                             (char *)(DAT_0011b218 + 0x11b066),fVar13);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  this = (CCArray *)(**(code **)(*piVar2 + 0x58))();
  iVar3 = cocos2d::CCArray::count(this);
  for (local_b8 = 0; (int)local_b8 < iVar3; local_b8 = local_b8 + 1) {
    piVar2 = (int *)cocos2d::CCArray::objectAtIndex(this,local_b8);
    iVar4 = (**(code **)(*piVar2 + 0xa0))();
    if (iVar4 != -1) {
      fVar13 = (float)(**(code **)(*piVar2 + 0xec))(piVar2,0);
      pCVar5 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar13);
      cocos2d::CCNode::runAction((CCNode *)piVar2,pCVar5);
    }
  }
  if (param_3 == 8) {
    if (in_r3 == 0x9e) {
      uVar7 = *(undefined4 *)(*(int *)(iVar12 + DAT_0011b25c) + 0x768);
      pcVar6 = (char *)(DAT_0011b264 + 0x11b186);
      uVar9 = *(undefined4 *)(*(int *)(iVar12 + DAT_0011b260) + 0xed0);
    }
    else {
      uVar7 = *(undefined4 *)(*(int *)(iVar12 + DAT_0011b25c) + in_r3 * 0xc);
      uVar9 = *(undefined4 *)(*(int *)(iVar12 + DAT_0011b260) + in_r3 * 0x18);
      pcVar6 = (char *)(DAT_0011b268 + 0x11b19a);
    }
    sprintf(acStack_80,pcVar6,uVar7,uVar9);
    uVar14 = setString((CCLabelTTF *)param_1,(char *)piVar1);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar1,aCStack_88);
    uVar7 = 10;
    puVar8 = *(undefined4 **)(iVar12 + DAT_0011b258);
  }
  else {
    if ((param_3 != 9) && (param_3 != 7)) goto LAB_0011b1c4;
    if (in_r3 == 0) {
      pcVar6 = (char *)(DAT_0011b220 + 0x11b0e4);
      iVar3 = DAT_0011b224 + 0x11b0e6;
LAB_0011b12a:
      sprintf(acStack_80,pcVar6,iVar3);
    }
    else {
      if (in_r3 == 1) {
        pcVar6 = (char *)(DAT_0011b228 + 0x11b0f2);
        iVar3 = DAT_0011b22c + 0x11b0f4;
        goto LAB_0011b12a;
      }
      if (in_r3 == 2) {
        pcVar6 = (char *)(DAT_0011b230 + 0x11b100);
        iVar3 = DAT_0011b234 + 0x11b102;
        goto LAB_0011b12a;
      }
      if (in_r3 == 3) {
        pcVar6 = (char *)(DAT_0011b238 + 0x11b10e);
        iVar3 = DAT_0011b23c + 0x11b110;
        goto LAB_0011b12a;
      }
      if (in_r3 == 4) {
        pcVar6 = (char *)(DAT_0011b240 + 0x11b11c);
        iVar3 = DAT_0011b244 + 0x11b11e;
        goto LAB_0011b12a;
      }
      if (in_r3 == 5) {
        pcVar6 = (char *)(DAT_0011b248 + 0x11b12a);
        iVar3 = DAT_0011b24c + 0x11b12c;
        goto LAB_0011b12a;
      }
    }
    uVar14 = setString((CCLabelTTF *)param_1,(char *)piVar1);
    pcVar11 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
    (*pcVar11)(piVar1,aCStack_90);
    if (param_3 != 7) {
      if (param_3 == 9) {
        **(undefined4 **)(iVar12 + DAT_0011b258) = 9;
      }
      goto LAB_0011b1c4;
    }
    uVar7 = 6;
    puVar8 = *(undefined4 **)(iVar12 + DAT_0011b258);
  }
  *puVar8 = uVar7;
LAB_0011b1c4:
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,2000,0xffffffff);
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


