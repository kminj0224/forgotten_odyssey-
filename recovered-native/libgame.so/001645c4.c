/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001645c4  Symbol: parseInternalProperties */

/* cocos2d::CCTMXLayer::parseInternalProperties() */

void __thiscall cocos2d::CCTMXLayer::parseInternalProperties(CCTMXLayer *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = propertyNamed((char *)this);
  if (iVar1 != 0) {
    iVar2 = FUN_001ed39c(iVar1 + 0x14,DAT_0016461c + 0x1645dc);
    if (iVar2 == 0) {
      this[0x144] = (CCTMXLayer)0x1;
    }
    else {
      iVar1 = atoi(*(char **)(iVar1 + 0x14));
      *(int *)(this + 0x140) = iVar1;
    }
  }
  iVar1 = propertyNamed((char *)this);
  if (iVar1 != 0) {
    strtod(*(char **)(iVar1 + 0x14),(char **)0x0);
    uVar3 = __truncdfsf2();
    *(undefined4 *)(this + 0x148) = uVar3;
  }
  return;
}


