api = 2
core = 7.x

; defaults
defaults[projects][subdir] = "contrib"

; Standard Contrib Modules
projects[] = ctools
projects[] = devel
projects[] = entitycache
projects[] = entityreference
projects[] = features
projects[] = token
projects[] = views
projects[entity][version] = 1.6
projects[libraries][version] = 2.2

;

; admin_menu
projects[admin_menu][version] = "3.0-rc5"

; salesforce
projects[field_permissions][type] = "module"
projects[field_permissions][download][type] = "git"
projects[field_permissions][download][url] = "git@git.drupal.org:project/field_permissions.git"
projects[field_permissions][download][branch] = "7.x-1.x"

; Themes
projects[ember][version] = "2.x-dev"
projects[ember][type] = "theme"
projects[ember][subdir] = "contrib"
projects[ember][download][type] = "git"
projects[ember][download][branch] = "7.x-2.x"
