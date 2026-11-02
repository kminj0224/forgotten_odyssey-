/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160cfc  Symbol: initWithData */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00160d36) */
/* WARNING: Removing unreachable block (ram,0x00160d36) */
/* cocos2d::CCTexture2D::initWithData(void const*, cocos2d::CCTexture2DPixelFormat, unsigned int,
   unsigned int, cocos2d::CCSize const&) */

undefined4 __thiscall
cocos2d::CCTexture2D::initWithData
          (CCTexture2D *this,void *param_1,CCTexture2DPixelFormat param_2,uint param_3,uint param_4,
          CCSize *param_5)

{
  undefined4 uVar1;
  CCSize CVar2;
  undefined4 uVar3;
  
  glPixelStorei(DAT_00160dc8,1);
  glGenTextures(1,this + 0x20);
  glBindTexture(DAT_00160dcc,*(undefined4 *)(this + 0x20));
  setAntiAliasTexParameters(this);
  uVar1 = DAT_00160dec;
  uVar3 = DAT_00160dd0;
  switch(param_2) {
  case 1:
    break;
  case 2:
    uVar3 = DAT_00160dd4;
    break;
  case 3:
    uVar1 = DAT_00160de0;
    uVar3 = DAT_00160dd4;
    break;
  case 4:
    uVar3 = DAT_00160de8;
    break;
  default:
    goto switchD_00160d36_caseD_5;
  case 6:
    uVar3 = DAT_00160de4;
    break;
  case 7:
    uVar1 = DAT_00160dd8;
    break;
  case 8:
    uVar1 = DAT_00160ddc;
  }
  glTexImage2D(DAT_00160dcc,0,uVar3,param_3,param_4,0,uVar3,uVar1,param_1);
switchD_00160d36_caseD_5:
  *(CCSize *)(this + 0x24) = *param_5;
  CVar2 = param_5[1];
  *(uint *)(this + 0x18) = param_3;
  *(uint *)(this + 0x1c) = param_4;
  *(CCSize *)(this + 0x28) = CVar2;
  *(CCTexture2DPixelFormat *)(this + 0x14) = param_2;
  uVar1 = __floatunsisf(param_3);
  uVar1 = __divsf3(*param_5,uVar1);
  *(undefined4 *)(this + 0x2c) = uVar1;
  uVar1 = __floatunsisf(param_4);
  uVar1 = __divsf3(param_5[1],uVar1);
  *(undefined4 *)(this + 0x30) = uVar1;
  this[0x34] = (CCTexture2D)0x0;
  return 1;
}


