/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011acdc  Symbol: Notice_Marget_String_Draw */

/* UI_Notice::Notice_Marget_String_Draw(cocos2d::CCLayer*, int, int) */

void __thiscall
UI_Notice::Notice_Marget_String_Draw(UI_Notice *this,CCLayer *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  float extraout_s0;
  float fVar7;
  float extraout_s0_00;
  float extraout_s1;
  float extraout_s1_00;
  CCSize aCStack_a4 [2];
  CCPoint aCStack_9c [8];
  char acStack_94 [20];
  char acStack_80 [100];
  int local_1c;
  
  piVar6 = *(int **)(DAT_0011addc + 0x11ace8);
  local_1c = *piVar6;
  if (param_3 == 0) {
    pcVar3 = (char *)(DAT_0011ade0 + 0x11acfa);
  }
  else if (param_3 == 1) {
    pcVar3 = (char *)(DAT_0011ade4 + 0x11ad04);
  }
  else if (param_3 == 2) {
    pcVar3 = (char *)(DAT_0011ade8 + 0x11ad0e);
  }
  else if (param_3 == 3) {
    pcVar3 = (char *)(DAT_0011adec + 0x11ad18);
  }
  else if (param_3 == 4) {
    pcVar3 = (char *)(DAT_0011adf0 + 0x11ad22);
  }
  else if (param_3 == 5) {
    pcVar3 = (char *)(DAT_0011adf4 + 0x11ad2c);
  }
  else if (param_3 == 6) {
    pcVar3 = (char *)(DAT_0011adf8 + 0x11ad36);
  }
  else if (param_3 == 7) {
    pcVar3 = (char *)(DAT_0011adfc + 0x11ad40);
  }
  else {
    if (param_3 != 8) goto LAB_0011ad4e;
    pcVar3 = (char *)(DAT_0011ae00 + 0x11ad4a);
  }
  strcpy(acStack_94,pcVar3);
LAB_0011ad4e:
  if (param_2 == 3) {
    pcVar3 = (char *)(DAT_0011ae04 + 0x11ad5a);
    iVar4 = DAT_0011ae08 + 0x11ad5c;
  }
  else {
    pcVar3 = (char *)(DAT_0011ae0c + 0x11ad64);
    iVar4 = DAT_0011ae10 + 0x11ad66;
  }
  sprintf(acStack_80,pcVar3,acStack_94,iVar4);
  fVar7 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_a4,extraout_s0,extraout_s1);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011ae20 + 0x11ad88),aCStack_a4,0,
                             (char *)(DAT_0011ae24 + 0x11ad84),fVar7);
  pcVar5 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_9c,extraout_s0_00,extraout_s1_00);
  (*pcVar5)(piVar1,aCStack_9c);
  if (param_2 - 3U < 2) {
    setString((CCLabelTTF *)this,(char *)piVar1);
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,2000,0xffffffff);
  if (local_1c != *piVar6) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


