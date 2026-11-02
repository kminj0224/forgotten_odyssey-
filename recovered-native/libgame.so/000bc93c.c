/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc93c  Symbol: SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>> */

/* void rapidjson::SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char> >
   >(rapidjson::GenericStringStream<rapidjson::UTF8<char> >&) */

void rapidjson::SkipWhitespace<rapidjson::GenericStringStream<rapidjson::UTF8<char>>>
               (GenericStringStream *param_1)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = *(char **)param_1;
      (((cVar1 = *pcVar2, cVar1 == ' ' || (cVar1 == '\n')) || (cVar1 == '\r')) || (cVar1 == '\t'));
      pcVar2 = pcVar2 + 1) {
  }
  *(char **)param_1 = pcVar2;
  return;
}


