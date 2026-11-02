/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e5374  Symbol: Unit_Buy_Notice */

/* Market_Unit::Unit_Buy_Notice() */

void Market_Unit::Unit_Buy_Notice(void)

{
  int *in_r0;
  int iVar1;
  int *this;
  char *pcVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  float in_s0;
  float in_s1;
  undefined8 uVar9;
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_60,in_s0,in_s1);
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  iVar1 = DAT_000e54f0;
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_30,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  iVar3 = DAT_000e54f8;
  uVar9 = cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  piVar7 = *(int **)(iVar1 + 0xe53d2);
  piVar6 = *(int **)(iVar3 + 0xe53e0);
  iVar3 = *piVar7;
  iVar4 = *piVar6;
  iVar8 = in_r0[0x4e];
  iVar1 = iVar3 * 9;
  *(undefined *)(iVar4 + iVar1 + iVar8 + DAT_000e54fc) = 1;
  *(undefined4 *)(iVar4 + (iVar1 + in_r0[0x4e] + DAT_000e5500) * 4 + 4) = 1;
  iVar4 = iVar4 + (iVar3 + DAT_000e5504) * 4;
  *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) - in_r0[0x56];
  iVar1 = (**(code **)(*in_r0 + 0x90))(in_r0);
  N_Draw_Number::SetMoney_Re
            (*(N_Draw_Number **)(iVar1 + 0x114),*(int *)(*piVar6 + (*piVar7 + DAT_000e5504) * 4 + 4)
             ,2);
  iVar1 = in_r0[0x4e];
  **(undefined4 **)(DAT_000e5508 + 0xe5448) = 1;
  Draw_Unit((Market_Unit *)in_r0,iVar1);
  Touch_Image_Pos((Market_Unit *)in_r0,in_r0[0x4e]);
  in_r0[0x50] = 0;
  this = (int *)N_Draw_Number::node();
  uVar9 = (**(code **)(*this + 0x3c))(this,aCStack_60 + iVar8 * 8);
  pcVar5 = *(code **)(*this + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar5)(this,aCStack_68);
  (**(code **)(*in_r0 + 0xcc))(in_r0,this,iVar8 + 0xc);
  N_Draw_Number::SetNumberFont((N_Draw_Number *)this,0);
  N_Draw_Number::SetNumber
            ((N_Draw_Number *)this,*(int *)(*piVar6 + (*piVar7 * 9 + iVar8 + DAT_000e5500) * 4 + 4),
             2);
  FileSave();
  if (*(char *)(*piVar6 + 1) != '\0') {
    pcVar2 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar2,(bool)((char)DAT_000e550c + -0x2c));
  }
  return;
}


