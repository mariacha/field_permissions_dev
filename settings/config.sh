#!/bin/bash

# match your install profile name
PROJECT=field_permissions_dev

# pantheon, acquia, generic
HOSTTYPE=generic

SITENAME="Field permissions testing"

# Copy the git repository URL from the Pantheon dashboard.
GITREPO=

# Specific files to prevent from being overwritten in the deployment repo.
protectfiles () {
	git checkout sites/default/settings.php
}