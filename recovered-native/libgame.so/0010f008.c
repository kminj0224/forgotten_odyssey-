/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010f008  Symbol: Skill_Icon_Visivle */

/* New_UI::Skill_Icon_Visivle(int) */

void __thiscall New_UI::Skill_Icon_Visivle(New_UI *this,int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  N_Draw_Number *pNVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  
  iVar14 = DAT_0010f20c + 0x10f016;
  piVar9 = *(int **)(iVar14 + DAT_0010f210);
  piVar12 = *(int **)(iVar14 + DAT_0010f214);
  cVar1 = *(char *)(*piVar9 + param_1 * 0xc + *piVar12 * 0x6c + DAT_0010f218);
  if (cVar1 < '\x01') {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    pcVar7 = *(code **)(*piVar2 + 0x6c);
  }
  else {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    pcVar7 = *(code **)(*piVar2 + 0x6c);
  }
  (*pcVar7)(piVar2,'\0' < cVar1);
  cVar1 = *(char *)(*piVar9 + param_1 * 0xc + *piVar12 * 0x6c + DAT_0010f21c);
  if (cVar1 < '\x01') {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    pcVar7 = *(code **)(*piVar2 + 0x6c);
  }
  else {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    pcVar7 = *(code **)(*piVar2 + 0x6c);
  }
  (*pcVar7)(piVar2,'\0' < cVar1);
  cVar1 = *(char *)(*piVar9 + param_1 * 0xc + *piVar12 * 0x6c + DAT_0010f220);
  if (cVar1 < '\x01') {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
    pcVar7 = *(code **)(*piVar2 + 0x6c);
  }
  else {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,5);
    pcVar7 = *(code **)(*piVar2 + 0x6c);
  }
  (*pcVar7)(piVar2,'\0' < cVar1);
  if (*(byte *)(*piVar9 + *piVar12 + DAT_0010f224 + 4) - 1 < 2) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    (**(code **)(*piVar2 + 0x6c))(piVar2,1);
  }
  iVar10 = *piVar9;
  iVar13 = *piVar12;
  piVar9 = *(int **)(iVar14 + DAT_0010f228);
  iVar6 = *piVar9;
  iVar8 = *(int *)(iVar14 + DAT_0010f22c);
  iVar11 = iVar10 + iVar13 + DAT_0010f224;
  uVar3 = __floatsisf(*(short *)((*(char *)(iVar10 + *(char *)(iVar11 + 4) * 0xc + iVar13 * 0x6c +
                                           DAT_0010f230) + 0x4d) * 2 + iVar8) + 0x28 +
                      (int)*(short *)((*(char *)(iVar10 + iVar13 * 0x6c + DAT_0010f220) + 0x21) * 2
                                     + *(int *)(iVar14 + DAT_0010f234)));
  *(undefined4 *)(iVar6 + 4) = uVar3;
  iVar11 = iVar10 + *(char *)(iVar11 + 4) * 0x50 + iVar13 * 0x2d0;
  if (*(int *)(*(int *)(iVar14 + DAT_0010f23c) + *(int *)(iVar11 + DAT_0010f238) * 0x18 + 0x14) ==
      0xe) {
    uVar4 = __floatsisf(*(undefined4 *)(iVar11 + DAT_0010f240 + 4));
    uVar3 = __addsf3(uVar3,uVar4);
    *(undefined4 *)(iVar6 + 4) = uVar3;
  }
  uVar3 = __floatsisf(*(short *)(iVar8 + (*(char *)(iVar10 + *(char *)(iVar10 + iVar13 +
                                                                       DAT_0010f224 + 4) * 0xc +
                                                             iVar13 * 0x6c + DAT_0010f244) + 99) * 2
                                ) + 0x28);
  *(undefined4 *)(iVar6 + 0xc) = uVar3;
  pNVar5 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x28);
  iVar14 = __fixsfsi(*(undefined4 *)(*piVar9 + 4));
  N_Draw_Number::SetNumber_Re(pNVar5,iVar14,0);
  pNVar5 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x2b);
  iVar14 = __fixsfsi(*(undefined4 *)(*piVar9 + 0xc));
  N_Draw_Number::SetNumber_Re(pNVar5,iVar14,0);
  return;
}


