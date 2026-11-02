/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e57f8  Symbol: Set_Max_Lv */

/* Market_Unit::Set_Max_Lv() */

void Market_Unit::Set_Max_Lv(void)

{
  int *in_r0;
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  CCPoint CVar4;
  CCPoint CVar5;
  code *pcVar6;
  int iVar7;
  float in_s0;
  undefined4 extraout_s0;
  float in_s1;
  undefined8 uVar8;
  undefined4 extraout_s1;
  float fVar9;
  int iVar10;
  CCPoint *local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  CCPoint local_70;
  CCPoint local_6c;
  int local_68;
  int local_64;
  CCPoint local_60 [2];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  uVar8 = cocos2d::CCPoint::CCPoint((CCPoint *)local_60,in_s0,in_s1);
  uVar8 = cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  uVar8 = cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
  local_84 = local_60;
  iVar7 = 0;
  do {
    iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)in_r0,iVar7 + 0x15);
    uVar8 = CONCAT44(extraout_s1,extraout_s0);
    if (iVar1 != 0) {
      pcVar6 = *(code **)(*in_r0 + 0xd0);
      uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)in_r0,iVar7 + 0x15);
      uVar8 = (*pcVar6)(in_r0,uVar2,1);
    }
    fVar9 = (float)((ulonglong)uVar8 >> 0x20);
    iVar1 = **(int **)(DAT_000e5968 + 0xe5894) * 9;
    if (*(char *)(**(int **)(DAT_000e5960 + 0xe588c) + iVar1 + iVar7 + DAT_000e5964) == '\0') {
      uVar8 = __subsf3(*local_84,DAT_000e5978);
      uVar8 = cocos2d::CCPoint::CCPoint
                        ((CCPoint *)&local_70,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20));
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_68,(float)uVar8,(float)((ulonglong)uVar8 >> 0x20))
      ;
      pcVar3 = (char *)(DAT_000e597c + 0xe592c);
      CVar4 = local_70;
      CVar5 = local_6c;
      iVar10 = local_68;
      iVar1 = local_64;
    }
    else {
      if (*(int *)(**(int **)(DAT_000e5960 + 0xe588c) + (iVar1 + iVar7 + DAT_000e596c) * 4 + 4) <
          0x14) {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_80,(float)uVar8,fVar9);
        pcVar3 = (char *)(DAT_000e5970 + 0xe58ce);
        iVar1 = local_7c;
        iVar10 = local_80;
      }
      else {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_78,(float)uVar8,fVar9);
        pcVar3 = (char *)(DAT_000e5974 + 0xe58ec);
        iVar1 = local_74;
        iVar10 = local_78;
      }
      CVar4 = local_60[iVar7 * 2];
      CVar5 = *(CCPoint *)(aCStack_58 + iVar7 * 8 + -4);
    }
    vDrawFrame((CCNode *)in_r0,pcVar3,CVar4,CVar5,iVar10,iVar1);
    iVar7 = iVar7 + 1;
    local_84 = local_84 + 2;
  } while (iVar7 != 9);
  return;
}


