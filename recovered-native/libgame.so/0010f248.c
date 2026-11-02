/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010f248  Symbol: File_Unit_Lode */

/* New_UI::File_Unit_Lode() */

void New_UI::File_Unit_Lode(void)

{
  int iVar1;
  CCNode *in_r0;
  CCSpriteFrameCache *pCVar2;
  int iVar3;
  char *pcVar4;
  CCPoint CVar5;
  int *piVar6;
  CCSpriteFrameCache **ppCVar7;
  int iVar8;
  int iVar9;
  float in_s0;
  float in_s1;
  undefined8 uVar10;
  CCPoint local_70 [2];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  char acStack_28 [12];
  int local_1c;
  
  iVar1 = DAT_0010f350;
  piVar6 = *(int **)(DAT_0010f344 + 0x10f254);
  local_1c = *piVar6;
  uVar10 = cocos2d::CCPoint::CCPoint((CCPoint *)local_70,in_s0,in_s1);
  uVar10 = cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  uVar10 = cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar10,(float)((ulonglong)uVar10 >> 0x20));
  iVar8 = 6;
  do {
    iVar9 = iVar8 + -6;
    ppCVar7 = *(CCSpriteFrameCache ***)(DAT_0010f378 + 0x10f2c8);
    if (*(char *)(**(int **)(DAT_0010f374 + 0x10f2c4) + **(int **)(DAT_0010f37c + 0x10f2d0) * 9 +
                  iVar9 + DAT_0010f380) == '\0') {
      pCVar2 = *ppCVar7;
      iVar3 = *(int *)(aCStack_68 + iVar9 * 8 + -4);
      CVar5 = local_70[iVar9 * 2];
      pcVar4 = (char *)(iVar1 + 0x10f2bc);
    }
    else {
      memset(acStack_28,0,10);
      sprintf(acStack_28,(char *)(DAT_0010f384 + 0x10f2f8),iVar8 + -5);
      pCVar2 = *ppCVar7;
      iVar3 = *(int *)(aCStack_68 + iVar9 * 8 + -4);
      CVar5 = local_70[iVar9 * 2];
      pcVar4 = acStack_28;
    }
    iVar9 = iVar8 + 1;
    vDrawFrame(pCVar2,in_r0,pcVar4,CVar5,iVar3,iVar8);
    iVar8 = iVar9;
  } while (iVar9 != 0xf);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


