/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165788  Symbol: parseXMLFile */

/* cocos2d::CCTMXMapInfo::parseXMLFile(char const*) */

undefined8 __thiscall cocos2d::CCTMXMapInfo::parseXMLFile(CCTMXMapInfo *this,char *param_1)

{
  int iVar1;
  char *pcStack_14;
  
  pcStack_14 = param_1;
  CCSAXParser::CCSAXParser((CCSAXParser *)&pcStack_14);
  iVar1 = CCSAXParser::init((char *)&pcStack_14);
  if (iVar1 != 0) {
    CCSAXParser::setDelegator((CCSAXParser *)&pcStack_14,(CCSAXDelegator *)(this + 0x14));
    iVar1 = CCSAXParser::parse((CCSAXParser *)&pcStack_14,param_1);
  }
  CCSAXParser::~CCSAXParser((CCSAXParser *)&pcStack_14);
  return CONCAT44(this,iVar1);
}


