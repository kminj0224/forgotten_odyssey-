/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148944  Symbol: initWithString */

/* cocos2d::CCLabelBMFont::initWithString(char const*, char const*) */

int __thiscall
cocos2d::CCLabelBMFont::initWithString(CCLabelBMFont *this,char *param_1,char *param_2)

{
  CCLabelBMFont CVar1;
  CCObject *this_00;
  size_t sVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  float extraout_s0;
  float extraout_s1;
  CCLabelBMFont *pCStack_20;
  char *pcStack_1c;
  char *pcStack_18;
  
  pCStack_20 = this;
  pcStack_1c = param_1;
  pcStack_18 = param_2;
  if (*(CCObject **)(this + 0x124) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x124));
  }
  this_00 = (CCObject *)FNTConfigLoadFile(param_2);
  *(CCObject **)(this + 0x124) = this_00;
  CCObject::retain(this_00);
  sVar2 = strlen(param_1);
  iVar3 = CCSpriteBatchNode::initWithFile
                    ((CCSpriteBatchNode *)this,*(char **)(*(int *)(this + 0x124) + 0x2c),sVar2);
  if (iVar3 != 0) {
    this[0x118] = (CCLabelBMFont)0xff;
    this[0x119] = (CCLabelBMFont)0xff;
    this[0x11a] = (CCLabelBMFont)0xff;
    this[0x11b] = (CCLabelBMFont)0xff;
    uVar5 = *(undefined4 *)(DAT_001489d0 + 0x148998);
    *(undefined4 *)(this + 0x60) = *(undefined4 *)(DAT_001489d0 + 0x148994);
    *(undefined4 *)(this + 100) = uVar5;
    piVar4 = (int *)(**(code **)(**(int **)(this + 0x100) + 0x1c))();
    CVar1 = (CCLabelBMFont)(**(code **)(*piVar4 + 0x38))();
    this[0x11c] = CVar1;
    pcVar6 = *(code **)(*(int *)this + 0x74);
    CCPoint::CCPoint((CCPoint *)&pCStack_20,extraout_s0,extraout_s1);
    (*pcVar6)(this,&pCStack_20);
    (**(code **)(*(int *)this + 0x110))(this,param_1);
    iVar3 = 1;
  }
  return iVar3;
}


