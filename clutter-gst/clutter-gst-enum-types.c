
/* Generated data (by glib-mkenums) */

#include "clutter-gst-enum-types.h"

/* enumerations from "./clutter-gst-types.h" */
#include "./clutter-gst-types.h"

GType
clutter_gst_seek_flags_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GFlagsValue values[] = {
        { CLUTTER_GST_SEEK_FLAG_NONE, "CLUTTER_GST_SEEK_FLAG_NONE", "none" },
        { CLUTTER_GST_SEEK_FLAG_ACCURATE, "CLUTTER_GST_SEEK_FLAG_ACCURATE", "accurate" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_flags_register_static (g_intern_static_string ("ClutterGstSeekFlags"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}
GType
clutter_gst_buffering_mode_get_type (void)
{
  static volatile gsize g_enum_type_id__volatile = 0;

  if (g_once_init_enter (&g_enum_type_id__volatile))
    {
      static const GEnumValue values[] = {
        { CLUTTER_GST_BUFFERING_MODE_STREAM, "CLUTTER_GST_BUFFERING_MODE_STREAM", "stream" },
        { CLUTTER_GST_BUFFERING_MODE_DOWNLOAD, "CLUTTER_GST_BUFFERING_MODE_DOWNLOAD", "download" },
        { 0, NULL, NULL }
      };
      GType g_enum_type_id;

      g_enum_type_id =
        g_enum_register_static (g_intern_static_string ("ClutterGstBufferingMode"), values);

      g_once_init_leave (&g_enum_type_id__volatile, g_enum_type_id);
    }

  return g_enum_type_id__volatile;
}

/* Generated data ends here */

