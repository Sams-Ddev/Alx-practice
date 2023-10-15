#include "main.h"

/**
 * env_strgArray - Returns a copy of the string array representing our environment (environ).
 * @info: A structure that holds potential arguments, used to maintain a consistent function prototype.
 * Return: Always 0
 */
char **env_strgArray(info_r *info)
{
	if (!info->environ || info->modified_env)
	{
		info->environ = strg_listSTRUCT(info->env);
		info->modified_env = 0;
	}

	return (info->environ);
}

/**
 * del_setenv - Deletes or removes an environment variable.
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 *  Return: 1 on delete, 0 otherwise
 * @var: the string env var property
 */
int del_setenv(info_r *info, char *var)
{
	list_t *node = info->env;
	size_t i = 0;
	char *p;

	if (!node || !var)
		return (0);

	while (node)
	{
		p = ChkStart_haystk(node->strg, var);
		if (p && *p == '=')
		{
			info->modified_env = del_IndexNode(&(info->env), i);
			i = 0;
			node = info->env;
			continue;
		}
		node = node->nXtNode;
		i++;
	}
	return (info->modified_env);
}

/**
 * init_setenv -Initializes a new environment variable or modifies an existing one.
 * @info: Structure containing potential arguments. Used to maintain
 *        constant function prototype.
 * @var: the string env var property
 * @value: the string env var value
 *  Return: Always 0
 */
int init_setenv(info_r *info, char *var, char *value)
{
	char *buf = NULL;
	list_t *node;
	char *p;

	if (!var || !value)
		return (0);

	buf = malloc(strg_length(var) + strg_length(value) + 2);
	if (!buf)
		return (1);
	copyStrings(buf, var);
	Cat_2Strgs(buf, "=");
	Cat_2Strgs(buf, value);
	node = info->env;
	while (node)
	{
		p = ChkStart_haystk(node->strg, var);
		if (p && *p == '=')
		{
			free(node->strg);
			node->strg = buf;
			info->modified_env = 1;
			return (0);
		}
		node = node->nXtNode;
	}
	addEndNode(&(info->env), buf, 0);
	free(buf);
	info->modified_env = 1;
	return (0);
}

