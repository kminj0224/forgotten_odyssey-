/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011b7f8  Symbol: Notice_String_Draw */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0011b83c) */
/* WARNING: Removing unreachable block (ram,0x0011b83c) */
/* UI_Notice::Notice_String_Draw(cocos2d::CCLayer*, int) */

void UI_Notice::Notice_String_Draw(CCLayer *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 in_r2;
  code *pcVar3;
  float in_s0;
  float fVar4;
  float extraout_s0;
  float in_s1;
  float extraout_s1;
  CCSize aCStack_28 [2];
  CCPoint aCStack_20 [12];
  
  fVar4 = (float)cocos2d::CCSize::CCSize((CCSize *)aCStack_28,in_s0,in_s1);
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011b898 + 0x11b81e),aCStack_28,0,
                             (char *)(DAT_0011b89c + 0x11b81a),fVar4);
  pcVar3 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0,extraout_s1);
  (*pcVar3)(piVar1,aCStack_20);
  switch(in_r2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    break;
  default:
    goto switchD_0011b83c_caseD_3;
  case 0xb:
  case 0xc:
  case 0xd:
  }
  setString((CCLabelTTF *)param_1,(char *)piVar1);
switchD_0011b83c_caseD_3:
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,2000,0xffffffff);
  return;
}


